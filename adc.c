/*
 * File:   adc.c
 * Author: Nick
 *
 * Created on March 12, 2019, 2:20 PM
 */


#include "xc.h"

void adcSetup(void){
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB1 = 1;
    TRISAbits.TRISA0 = 1;
    TRISAbits.TRISA1 = 1;
    
    
    AD1CON1bits.AD12B = 0;
    AD1CON1bits.FORM = 0;
    AD1CON1bits.SSRC = 0b011;
    AD1CON1bits.SIMSAM = 1;
    AD1CON1bits.ASAM = 1;
    
    AD1CON2bits.VCFG = 0;
    AD1CON2bits.CSCNA = 0;
    AD1CON2bits.CHPS = 0b11;
    AD1CON2bits.BUFM = 0;
    
    AD1CHS123bits.CH123NA = 0;
    AD1CHS123bits.CH123NB = 0;
    AD1CHS123bits.CH123SA = 0;
    AD1CHS123bits.CH123SB = 0;
    
    AD1CHS0bits.CH0NB = 0;
    AD1CHS0bits.CH0SB = 3;
    AD1CHS0bits.CH0NA = 0;
    AD1CHS0bits.CH0SA = 3;
    
    AD1CSSLbits.CSS0 = 1;
    AD1CSSLbits.CSS1 = 1;
    AD1CSSLbits.CSS2 = 1;
    AD1CSSLbits.CSS3 = 1;

    
    AD1PCFGL = 0xfff0;
    //AD1PCFGH = 0xffff;
    
    AD1CON1bits.ADON = 1;
}