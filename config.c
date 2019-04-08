/*
 * File:   config.c
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
#pragma config FNOSC = PRIPLL           // Oscillator Mode (Primary Oscillator (XT, HS, EC) w/ PLL)
#pragma config IESO = ON                // Internal External Switch Over Mode (Start-up device with FRC, then automatically switch to user-selected oscillator source when ready)

// FOSC
#pragma config POSCMD = HS              // Primary Oscillator Source (HS Oscillator Mode)
#pragma config OSCIOFNC = ON            // OSC2 Pin Function (OSC2 pin has digital I/O function)
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
#pragma config PWMPIN = OFF             // Motor Control PWM Module Pin Mode bit (PWM module pins controlled by PWM module at device Reset)

// FICD
#pragma config ICS = PGD1               // Comm Channel Select (Communicate on PGC1/EMUC1 and PGD1/EMUD1)
#pragma config JTAGEN = OFF             // JTAG Port Enable (JTAG is Disabled)

#include "xc.h"


volatile unsigned int run = 0;

void oscSetup(void){   
    //Setting Up External Oscillator
    //OSCCONbits.COSC = 0b011;
    OSCCONbits.CLKLOCK = 0;
    OSCCONbits.NOSC = 0b011; // External oscillator w/ PLL
    OSCCONbits.IOLOCK = 0;
    OSCCONbits.OSWEN = 1;
    
    CLKDIVbits.PLLPRE = 0; //N1 = 2
    CLKDIVbits.PLLPOST = 0b00; // N2 = 2
    PLLFBDbits.PLLDIV = 39; //M = 40
    RCONbits.SWDTEN = 0;
    
    
    
    // Enable Interrupts
    //SRbits.IPL = 0;
}

void T5Setup(void){
    T5CONbits.TCKPS = 0b10;
    T5CONbits.TON = 1;
}

void ms_delay(int n){
    while(n>0){
        TMR5 = 0;
        while(TMR5 < 625);
        n--;
    }
}


// Timer 2 is used for input capture module
void T2Setup(void){
    IFS0bits.T2IF = 0;
    IEC0bits.T2IE = 1;
    PR2 = 65534;
    T2CONbits.TCKPS = 0b11;
    T2CONbits.TON = 1;
}

void T4Setup(void){
    IFS1bits.T4IF = 0;
    IEC1bits.T4IE = 1;
    PR4 = 4000;
    T4CONbits.TCKPS = 0b00;
    T4CONbits.TON = 1;
}

void T1Setup(void){
    IFS0bits.T1IF = 0;
    IEC0bits.T1IE = 1;
    T4CONbits.TCKPS = 0b00;
    PR1 = 400;
    T4CONbits.TON;
}


void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void){
    IFS0bits.T1IF = 0;;
    run++;
    
}