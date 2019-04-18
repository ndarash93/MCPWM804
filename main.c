/*
 * File:   main.c
 * Author: Nick
 *
 * Created on March 7, 2019, 2:27 PM
 */




// FBS
#pragma config BWRP = WRPROTECT_OFF     // Boot Segment Write Protect (Boot Segment may be written)
#pragma config BSS = NO_FLASH           // Boot Segment Program Flash Code Protection (No Boot program Flash segment)
#pragma config RBS = NO_RAM             // Boot Segment RAM Protection (No Boot RAM)

// FSS
#pragma config SWRP = WRPROTECT_OFF     // Secure Segment Program Write Protect (Secure segment may be written)
#pragma config SSS = NO_FLASH           // Secure Segment Program Flash Code Protection (No Secure Segment)
#pragma config RSS = NO_RAM             // Secure Segment Data RAM Protection (No Secure RAM)

// FGS
#pragma config GWRP = OFF               // General Code Segment Write Protect (User program memory is not write-protected)
#pragma config GSS = OFF                // General Segment Code Protection (User program memory is not code-protected)

// FOSCSEL
#pragma config FNOSC = FRCPLL           // Oscillator Mode (Internal Fast RC (FRC) w/ PLL)
#pragma config IESO = ON                // Internal External Switch Over Mode (Start-up device with FRC, then automatically switch to user-selected oscillator source when ready)

// FOSC
#pragma config POSCMD = NONE            // Primary Oscillator Source (Primary Oscillator Disabled)
#pragma config OSCIOFNC = OFF           // OSC2 Pin Function (OSC2 pin has clock out function)
#pragma config IOL1WAY = ON             // Peripheral Pin Select Configuration (Allow Only One Re-configuration)
#pragma config FCKSM = CSECMD           // Clock Switching and Monitor (Clock switching is enabled, Fail-Safe Clock Monitor is disabled)

// FWDT
#pragma config WDTPOST = PS32768        // Watchdog Timer Postscaler (1:32,768)
#pragma config WDTPRE = PR128           // WDT Prescaler (1:128)
#pragma config WINDIS = OFF             // Watchdog Timer Window (Watchdog Timer in Non-Window mode)
#pragma config FWDTEN = OFF             // Watchdog Timer Enable (Watchdog timer enabled/disabled by user software)

// FPOR
#pragma config FPWRT = PWR128           // POR Timer Value (128ms)
#pragma config ALTI2C = OFF             // Alternate I2C  pins (I2C mapped to SDA1/SCL1 pins)
#pragma config LPOL = ON                // Motor Control PWM Low Side Polarity bit (PWM module low side output pins have active-high output polarity)
#pragma config HPOL = ON                // Motor Control PWM High Side Polarity bit (PWM module high side output pins have active-high output polarity)
#pragma config PWMPIN = ON             // Motor Control PWM Module Pin Mode bit (PWM module pins controlled by PORT register at device Reset)

// FICD
#pragma config ICS = PGD1               // Comm Channel Select (Communicate on PGC1/EMUC1 and PGD1/EMUD1)
#pragma config JTAGEN = OFF             // JTAG Port Enable (JTAG is Disabled)










#include "xc.h"
#include "config.h"
#include "pwm.h"
#include "dma.h"
#include "adc.h"
#include "uart.h"
#include "lookup.h"
#include "inputCapture.h"
#include "i2c.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define IC bufferADC[0]
#define IB bufferADC[2]
#define IA bufferADC[1]
#define EN LATCbits.LATC4


void inverse_park(int d, int q, int theta, float* alpha, float* beta);
void inverse_clarke(float alpha, float beta, float* a, float* b, float* c);
void park(float alpha, float beta, float* d, float* q, int theta);
void clarke(float a, float b, float c, float* alpha, float* beta);
float PI(float request, float actual, float Kp, float Ki, float* integral);


void OCSetup(void);
void T3Setup(void);

int main(void) {       
    float Vd_command, Vq_command, Valpha, Vbeta, Va, Vb, Vc, Ia, Ib, Ic, Ialpha, Ibeta, Iqref, Idref, Id, Iq;
    const int Lq, Ld, deltaT, kN;
    float Id_err = 0, Iq_err = 0, Id_req, Iq_req, Id_integral = 0, Iq_integral = 0, Id_command, Iq_command;
    float Kp = 100, Ki = 1;
    
    float filterA, prevFilterA;
    float bufferA[512];
    
    float filterB, prevFilterB;
    float bufferB[512];
    
    float filterC, prevFilterC;
    float bufferC[512];
    unsigned int bufferIndex = 0;
    
    
    
    float integrator0, integrator1, integrator2;
    float Ke, Kt;
    float J, L, R;
    float cTheta;
    float di, dTheta, d2Theta;
    float kLW = .1;
    float kRW = 1;
    
    
    
    
    Id_req = 0;
    Iq_req = 7.0;
    
    char str[40];
    
    oscSetup();
    
    pwmSetup();
    T5Setup();
    
    TRISCbits.TRISC4 = 0;
    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    LATCbits.LATC4 = 1;
    
    uartSetup();
    
    UARTSend("Test");
    dmaSetup();
    adcSetup();
    
    inputCaptureSetup();
    
    //i2cSetup();
    
    
    hall_A = PORTCbits.RC0;
    hall_B = PORTCbits.RC1;
    hall_C = PORTCbits.RC2;
    
    T1Setup();
    T2Setup();
    T4Setup();
    
    T3Setup();
    OCSetup();
    EN = 0;
    ms_delay(500);
    EN = 1;
    while(1){
        //sprintf(str, "%1.4f,\n\r", fTheta);
        
        
        if(1){
            
            
            Ia = current[IA];
            Ib = current[IB];
            Ic = current[IC];
            
            bufferA[bufferIndex&0x1FF] = Ia;
            prevFilterA = filterA;
            filterA += Ia;
            bufferIndex++;
            filterA -= bufferA[bufferIndex&0x1FF];
            
            bufferB[bufferIndex&0x1FF] = Ib;
            prevFilterB = filterB;
            filterB += Ib;
            bufferIndex++;
            filterB -= bufferB[bufferIndex&0x1FF];
            
            bufferC[bufferIndex&0x1FF] = Ic;
            prevFilterC = filterC;
            filterC += Ic;
            bufferIndex++;
            filterC -= bufferC[bufferIndex&0x1FF];
            
            cTheta = asin[(unsigned int)((filterA/512)*kRW + kLW*((filterA-prevFilterA)*10000))];
            
            clarke(filterA/512, filterB/512, filterC/512, &Ialpha, &Ibeta);
            park(Ialpha, Ibeta, &Id, &Iq, (unsigned int)(cTheta+90));
           
            
            Id_command = PI(Id_req, Id, Kp, Ki, &Id_integral);
            Iq_command = PI(Iq_req, Iq, Kp, Ki, &Iq_integral);
            
            Vd_command = 4*Id_command;
            Vq_command = 4*Iq_command;
            
            
            inverse_park(Vd_command, Vq_command, (unsigned int)(cTheta+90), &Valpha, &Vbeta);
            inverse_clarke(Valpha, Vbeta, &Va, &Vb, &Vc);
           
            /*
            PDC1 = (unsigned int)(500*sin[theta] + 500);
            PDC2 = (unsigned int)(500*sin_120[theta] + 500);
            PDC3 = (unsigned int)(500*sin_m120[theta] + 500);            
            */
            
            PDC1 = (unsigned int)(500);
            PDC1 = (unsigned int)(500);
            PDC1 = (unsigned int)(500);
            
            //PDC1 = 0;
            //PDC2 = 0;
            //PDC3 = 0;
            
            //OC1RS = (unsigned int)((sin[(unsigned int)fTheta]*500) + 500);
            OC1RS = (unsigned int)(cTheta*2) + 500;
        }else{
            PDC1 = 0;
            PDC2 = 0;
            PDC3 = 0;
            OC1RS = (unsigned int)(cTheta*2) + 500;
            
        }
        //cTheta = asin[(unsigned int)(filterA*kRW + kLW*((filterA-prevFilterA)/.0001))];
        
    }
    return 0;
}


void inverse_park(int d, int q, int theta, float* alpha, float* beta){
    *alpha = d*cos[theta] - q*sin[theta];
    *beta = q*cos[theta] + d*sin[theta];
}

void inverse_clarke(float alpha, float beta, float* a, float* b, float* c){
    *a = alpha;
    *b = (.5)*((-alpha) + (1.7321*beta));
    *c = (.5)*((-alpha) - (1.7321*beta));
}

void park(float alpha, float beta, float* d, float* q, int theta){
    *d = cos[theta]*alpha + sin[theta]*beta;
    *q = cos[theta]*beta - sin[theta]*alpha;
}

void clarke(float a, float b, float c, float* alpha, float* beta){
    *alpha = a;
    *beta = (0.5773*(b-c));
}

float PI(float request, float actual, float Kp, float Ki, float* integral){
    float err = request - actual;
    *integral += err*.0000064;
    return (Kp*err + Ki*(*integral));
}



void OCSetup(void){
    TRISBbits.TRISB5 = 0;
    OC1CONbits.OCTSEL = 1;
    OC1CONbits.OCM = 0b110;
    
    RPOR2bits.RP5R = 0b10010;
}

void T3Setup(void){
    T3CONbits.TCKPS = 0b00;
    T3CONbits.TON = 1;
    PR3 = 1000;
}