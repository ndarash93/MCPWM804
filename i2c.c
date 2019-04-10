/*
 * File:   i2c.c
 * Author: nick
 *
 * Created on April 9, 2019, 4:59 PM
 */


#include "i2c.h"

unsigned char oled[8][128];





void i2cSetup(void){
    I2C1BRG = BAUD_400K;
    I2C1CONbits.I2CEN = 1;
}


void i2cSend(char data){
    I2C1TRN = data;
}