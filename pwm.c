/*
 * File:   pwm.c
 * Author: Nick
 *
 * Created on March 7, 2019, 2:44 PM
 */


#include "xc.h"

void pwmSetup(void){
    P1TCONbits.PTEN = 1;
    P1TCONbits.PTCKPS = 0b01; // Prescaler 4:1
    P1TCONbits.PTMOD = 0b00; // Free running mode runs continuously
    
    // PxTPER
    P1TPER = 999; // Set Period register to run at 10kHz
    
    // PxTMR
    P1TMRbits.PTDIR = 0; // Timer counts up
    
    // PWMxCON1
    PWM1CON1bits.PMOD1 = 0;
    PWM1CON1bits.PMOD2 = 0;
    PWM1CON1bits.PMOD3 = 0;
    PWM1CON1bits.PEN1H = 1;
    PWM1CON1bits.PEN1L = 1;
    PWM1CON1bits.PEN2H = 1;
    PWM1CON1bits.PEN2L = 1;
    PWM1CON1bits.PEN3H = 1;
    PWM1CON1bits.PEN3L = 1;
    
    // PxDTCON1
    P1DTCON1bits.DTAPS = 0b10;
    P1DTCON1bits.DTA = 5;
    
    // PxDTCON2
    P1DTCON2 = 0b000000;
    
    // Duty Cycle 1 Register
    PDC1 = 0;
    
    // Duty Cycle 2 Register
    PDC2 = 0;
    
    // Duty Cycle 3 Register
    PDC3 = 0;
    
    
    P1OVDCONbits.POVD1H = 1;
    P1OVDCONbits.POVD1L = 1;
    P1OVDCONbits.POVD2H = 1;
    P1OVDCONbits.POVD2L = 1;
    P1OVDCONbits.POVD3H = 1;
    P1OVDCONbits.POVD3L = 1;
    
}
