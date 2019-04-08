/*
 * File:   main.c
 * Author: Nick
 *
 * Created on March 7, 2019, 2:27 PM
 */


#include "xc.h"
#include "config.h"
#include "pwm.h"
#include "dma.h"
#include "adc.h"
#include "uart.h"
#include "lookup.h"
//#include "inputCapture.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define H1 P1OVDCONbits.POUT1H
#define L1 P1OVDCONbits.POUT1L
#define H2 P1OVDCONbits.POUT2H
#define L2 P1OVDCONbits.POUT2L
#define H3 P1OVDCONbits.POUT3H
#define L3 P1OVDCONbits.POUT3L



//void clarke(float *alpha, float *beta);


int main(void) {    
    //unsigned int a = 0, b = 0, c = 0;
    //int d, q;
    //char str[30];
    oscSetup();
    //pwmSetup();
    T5Setup();
    TRISCbits.TRISC4 = 0;
    //TRISCbits.TRISC0 = 1;
    //TRISCbits.TRISC1 = 1;
    //TRISCbits.TRISC2 = 1;
    LATCbits.LATC4 = 0;
    //uartSetup();
    
    //UARTSend("Test");
    //dmaSetup();
    //adcSetup();
    //T2Setup();
    //T4Setup();
    //inputCaptureSetup();
    
    //hall_A = PORTCbits.RC0;
    //hall_B = PORTCbits.RC1;
    //hall_C = PORTCbits.RC2;
    
    //float d, q, alpha, beta;
    TRISCbits.TRISC9 = 0;
    LATCbits.LATC9 = 1;
    while(1){
        LATCbits.LATC9 = 0;
        LATCbits.LATC9 = 1;
    }
    return 0;
}
