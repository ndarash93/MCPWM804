/*
 * File:   UART.h
 * Author: Nick
 *
 * Created on November 12, 2017, 6:44 PM
 */


#ifndef UART_H
#define UART_H
#include <xc.h>


void uartSetup(void);




void UARTSend (char *data);

unsigned char UARTReceive(void);

void printRegister(unsigned int data);

#endif