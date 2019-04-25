/*
 * File:   inputCapture.c
 * Author: Nick
 *
 * Created on March 12, 2019, 8:42 PM
 */

#include "inputCapture.h"


volatile unsigned int hall_A, hall_B, hall_C, timeStep;
volatile int position, speed, calculatedPosition, distance, step, send;

volatile float fPos, fSpeed, fCalc, fDistance;

float alpha, beta, command_D = -1, command_Q = 1, i_D, i_Q;
float error_D, error_Q, integral_D, integral_Q, u_D, u_Q, i_A, i_B, i_C;




void inputCaptureSetup(void){
    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    
    
    RPINR7bits.IC1R = 16;
    RPINR7bits.IC2R = 17;
    RPINR10bits.IC7R = 18;
    
    IC1CONbits.ICTMR = 1;
    IC1CONbits.ICI = 0;
    IC1CONbits.ICM = 0b001;
    
    IC2CONbits.ICTMR = 1;
    IC2CONbits.ICI = 0;
    IC2CONbits.ICM = 0b001;
    
    IC7CONbits.ICTMR = 1;
    IC7CONbits.ICI = 0;
    IC7CONbits.ICM = 0b001;
    
    IFS0bits.IC1IF = 0;
    IFS0bits.IC2IF = 0;
    IFS1bits.IC7IF = 0;
    
    IEC0bits.IC1IE = 1;
    IEC0bits.IC2IE = 1;
    IEC1bits.IC7IE = 1;
}


void __attribute__((interrupt, no_auto_psv)) _IC1Interrupt(void){
    IFS0bits.IC1IF = 0;
    TMR2 = 0;
    hall_A = !hall_A;
    if(hall_A && hall_B && !hall_C){
        //position++;
        fSpeed = 1.0472/(IC1BUF*0.0000064);
        /*
        P1OVDCONbits.POUT1H = 1;
        P1OVDCONbits.POUT1L = 0;
        P1OVDCONbits.POUT2H = 1;
        P1OVDCONbits.POUT2L = 0;
        P1OVDCONbits.POUT3H = 0;
        P1OVDCONbits.POUT3L = 1;
        */
        
        
    }else if(hall_A && !hall_B && hall_C){
        //position--;
        
    }else if(!hall_A && !hall_B && hall_C){
        //position++;
        fSpeed = 1.0472/(IC1BUF*0.0000064);
        /*
        P1OVDCONbits.POUT1H = 0;
        P1OVDCONbits.POUT1L = 1;
        P1OVDCONbits.POUT2H = 0;
        P1OVDCONbits.POUT2L = 1;
        P1OVDCONbits.POUT3H = 1;
        P1OVDCONbits.POUT3L = 0;
        */
    }else if(!hall_A && hall_B && !hall_C){
        //position--;
        
    }
}

void __attribute__((interrupt, no_auto_psv)) _IC2Interrupt(void){
    IFS0bits.IC2IF = 0;
    TMR2 = 0;
    hall_B = !hall_B;
    if(hall_A && hall_B && !hall_C){
        //position--;
       
    }else if(hall_A && !hall_B && !hall_C){
        //position++;
        fSpeed = 1.0472/(IC2BUF*0.0000064);
        //fPos = 0;
        //fCalc = 0;
        /*
        P1OVDCONbits.POUT1H = 1;
        P1OVDCONbits.POUT1L = 0;
        P1OVDCONbits.POUT2H = 0;
        P1OVDCONbits.POUT2L = 1;
        P1OVDCONbits.POUT3H = 0;
        P1OVDCONbits.POUT3L = 1;
        */
    }else if(!hall_A && !hall_B && hall_C){
        //position--;
        
    }else if(!hall_A && hall_B && hall_C){
        //position++;
        fSpeed = 1.0472/(IC2BUF*0.0000064);
        /*
        P1OVDCONbits.POUT1H = 0;
        P1OVDCONbits.POUT1L = 1;
        P1OVDCONbits.POUT2H = 1;
        P1OVDCONbits.POUT2L = 0;
        P1OVDCONbits.POUT3H = 1;
        P1OVDCONbits.POUT3L = 0;
        */
    }
}

void __attribute__((interrupt, no_auto_psv)) _IC7Interrupt(void){
    IFS1bits.IC7IF = 0;
    TMR2 = 0;
    hall_C = !hall_C;
    if(hall_A && !hall_B && !hall_C){
        //position--;
        //fPos = 0;
        //fCalc = 0;
    }else if(hall_A && !hall_B && hall_C){
        //position++;
        fSpeed = 1.0472/(IC7BUF*0.0000064);
        /*
        P1OVDCONbits.POUT1H = 1;
        P1OVDCONbits.POUT1L = 0;
        P1OVDCONbits.POUT2H = 0;
        P1OVDCONbits.POUT2L = 1;
        P1OVDCONbits.POUT3H = 1;
        P1OVDCONbits.POUT3L = 0;
        */
    }else if(!hall_A && hall_B && hall_C){
        //position--;
        
    }else if(!hall_A && hall_B && !hall_C){
        //position++;
        fSpeed = 1.0472/(IC7BUF*0.0000064);
        /*
        P1OVDCONbits.POUT1H = 0;
        P1OVDCONbits.POUT1L = 1;
        P1OVDCONbits.POUT2H = 1;
        P1OVDCONbits.POUT2L = 0;
        P1OVDCONbits.POUT3H = 0;
        P1OVDCONbits.POUT3L = 1;
        */
    }
}


void __attribute__ ((interrupt, no_auto_psv)) _T2Interrupt(void){
    IFS0bits.T2IF = 0;
    fSpeed = 0;
    i_A = 0;
    i_B = 0;
    i_C = 0; 
}

void __attribute__ ((interrupt, no_auto_psv)) _T4Interrupt(void){
    IFS1bits.T4IF = 0;
    
    // calculated speed
    fCalc += fSpeed*.0001;
    step = 1;
    send++;
}
