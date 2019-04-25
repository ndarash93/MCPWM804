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
#pragma config PWMPIN = ON              // Motor Control PWM Module Pin Mode bit (PWM module pins controlled by PORT register at device Reset)

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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define H1 P1OVDCONbits.POUT1H
#define L1 P1OVDCONbits.POUT1L
#define H2 P1OVDCONbits.POUT2H
#define L2 P1OVDCONbits.POUT2L
#define H3 P1OVDCONbits.POUT3H
#define L3 P1OVDCONbits.POUT3L






int main(void) {       
    //unsigned int old_hall_A = 0, old_hall_B = 0, old_hall_C = 0;
    
    //unsigned int a = 0, b = 0, c = 0;
    //int d, q;
    //char str[30];
    oscSetup();
    
    pwmSetup();
    T5Setup();
    
    TRISCbits.TRISC4 = 0;
    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    LATCbits.LATC4 = 1;
    
    uartSetup();
    
    //UARTSend("Test");
    dmaSetup();
    adcSetup();
    T1Setup();
    T4Setup();
    inputCaptureSetup();
    
    hall_A = PORTCbits.RC0;
    hall_B = PORTCbits.RC1;
    hall_C = PORTCbits.RC2;
    
    //float d, q, alpha, beta;
    while(1){
        if(run<1){
            H1 = hall_A;
            L1 = !hall_A;
            H2 = hall_B;
            L2 = !hall_B;
            H3 = hall_C;
            L3 = !hall_C;
            //okToSwitch = 
        }else{
            H1 = 0;
            L1 = 0;
            H2 = 0;
            L2 = 0;
            H3 = 0;
            L3 = 0;
            if(run >= 10){
                run = 0;
            }
        }
        
    }
    return 0;
}
