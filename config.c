#include "xc.h"


volatile unsigned int theta = 0, update = 0;

void oscSetup(void){   
    CLKDIVbits.PLLPRE = 0; //N1 = 2
    CLKDIVbits.PLLPOST = 0b00; // N2 = 2
    PLLFBDbits.PLLDIV = 39; //M = 40
    
    OSCTUNbits.TUN = 23;
    
    __builtin_write_OSCCONH(0x01);
    __builtin_write_OSCCONL(OSCCON | 0x01);
    
    while (OSCCONbits.COSC != 0b001);
    // Wait for PLL to lock
    while(OSCCONbits.LOCK!=1);
}

void T5Setup(void){
    T5CONbits.TCKPS = 0b10;
    T5CONbits.TON = 1;
}

void ms_delay(int n){
    T5CONbits.TCKPS = 0b10;
    while(n>0){
        TMR5 = 0;
        while(TMR5 < 625);
        n--;
    }
}

void us_delay(int n){
    T5CONbits.TCKPS = 0b00;
    while(n>0){
        TMR5 = 0;
        while(TMR5 < 40);
        n--;
    }
}


// Timer 2 is used for input capture module
void T2Setup(void){
    IFS0bits.T2IF = 0;
    IEC0bits.T2IE = 0;
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
    T1CONbits.TCKPS = 0b11;
    PR1 = 36;
    T1CONbits.TON = 1;
}


void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void){
    IFS0bits.T1IF = 0;
    theta++;
    update = 1;
    if(theta >= 360){
        theta = 0;
    }
}
