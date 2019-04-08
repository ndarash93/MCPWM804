/*
 * File:   dma.c
 * Author: Nick
 *
 * Created on March 12, 2019, 2:04 PM
 */


#include "dma.h"

volatile unsigned int bufferADC[4] __attribute__((space(dma)));


void dmaSetup(void){
    DMA0CONbits.CHEN = 0;
    DMA0CONbits.SIZE = 0;
    DMA0CONbits.DIR = 0;
    DMA0CONbits.AMODE = 0;
    DMA0CONbits.MODE = 0;
    
    DMA0REQbits.FORCE = 0;
    DMA0REQbits.IRQSEL = 0b0001101;
    
    DMA0PAD = 0x0300;
    
    DMA0CNT = 3;
    
    DMA0STA = &bufferADC;
    
    DMA0CONbits.CHEN = 1;
}
