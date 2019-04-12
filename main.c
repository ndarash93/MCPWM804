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


void inverse_park(int d, int q, int theta, float* alpha, float* beta);
void inverse_clarke(float alpha, float beta, float* a, float* b, float* c);
void park(float alpha, float beta, float* d, float* q, int theta);
void clarke(float a, float b, float c, float* alpha, float* beta);


int main(void) {       
    float Vdref, Vqref, Valpha, Vbeta, va, vb, vc, ia_fake, ib_fake, ic_fake, Ialpha, Ibeta, Iqref, Idref, Id, Iq;
    const int Lq, Ld, deltaT, kN;
    Vdref = 0;
    Vqref = 5;
    Iqref = 1;
    Idref = 0;
    
    oscSetup();
    
    pwmSetup();
    //T5Setup();
    
    TRISCbits.TRISC4 = 0;
    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    LATCbits.LATC4 = 1;
    
    //uartSetup();
    
    //UARTSend("Test");
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
    ia_fake = 1;
    ib_fake = 1;
    ic_fake = 1;
    while(1){
        
        if(update){
            clarke(ia_fake*sin[theta], ib_fake*sin_120[theta], ic_fake*sin_m120[theta], &Ialpha, &Ibeta);
            park(Ialpha, Ibeta, &Id, &Iq, theta);
            
            PDC1 = (Id+1)*200;
            PDC2 = (Iq+1)*200;
            PDC3 = (Ialpha+1)*200;
            
            
            
            /*
            PDC1 = 200;
            update = 0;
            inverse_park(Vdref, Vqref, fTheta, &Valpha, &Vbeta);
            inverse_clarke(Valpha, Vbeta, &va, &vb, &vc);
            PDC1 = (unsigned int)((va+6)*150);
            PDC2 = (unsigned int)((vb+6)*150);
            PDC3 = (unsigned int)((vc+6)*150);
            //PDC1 = (unsigned int)((fOmega));
            */
        }
        
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

