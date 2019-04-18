/*
 * File:   UART.c
 * Author: Nick
 *
 * Created on November 12, 2017, 6:44 PM
 */

#include "uart.h"
//#include "Config.h"

//volatile int dataReceived = 0;




void uartSetup(void){
// U1MODE Register settings
    
    
    U1BRG = 270;  // 115200
    TRISCbits.TRISC9 = 0;
    
    U1MODEbits.UARTEN = 1; //Enable UART1
    U1MODEbits.USIDL = 0; //Continue during idle
    U1MODEbits.IREN = 0; //IrDA encoder/decoder disable
    U1MODEbits.RTSMD = 1; //U1RTS not in flow control mode
    U1MODEbits.UEN = 0b10; //U1TX and U1RX are enabled and used. UxCTS and UxRTS/BCLK pins controlled by port latches
    U1MODEbits.WAKE = 0; //No wake-up enabled
    U1MODEbits.LPBACK = 0;
    U1MODEbits.ABAUD = 0;
    U1MODEbits.URXINV = 0;
    U1MODEbits.BRGH = 0; //16x baud clock
    U1MODEbits.PDSEL = 0b00; //8bit data - no parity
    U1MODEbits.STSEL = 0;
    
    U1STAbits.URXISEL = 0b00;   //Interrupt when a character is transferred to the Transmit Shift register (this implies there is at least one character open in the transmit buffer)
    U1STAbits.UTXINV = 0;       //0 = UxTX Idle state is ?1?
    U1STAbits.UTXBRK = 0;
    U1STAbits.UTXEN = 1;    //Transmit enable bit
    U1STAbits.URXISEL = 0b00;
    U1STAbits.ADDEN = 0; //Address detect bit
    U1STAbits.OERR = 0;  //Overrun Error Status Bit
    
    TRISCbits.TRISC9 = 0;
    TRISCbits.TRISC8 = 1;
    RPOR12bits.RP25R = 0b00011;   
}




void UARTSend (char *data){
    while(*data){
        while(!U1STAbits.TRMT);  // hold the program till TX buffer is free
        U1TXREG = *data++; //Load the transmitter buffer with the received value
    }
}


unsigned char UARTReceive(void){
    return U1RXREG;
}
   

void printRegister(unsigned int data){
    //char val[4];
    unsigned int nib[4];
    int i = 0;
    nib[3] = data & 0x000F;
    data = data >> 4;
    nib[2] = data & 0x000F;
    data = data >> 4;
    nib[1] = data & 0x000F;
    nib[0] = data >> 4;
    UARTSend("0x");
    while(i<4){
        switch(nib[i]){
            case 0:
                UARTSend("0");
                break;
            case 1:
                UARTSend("1");
                break;
            case 2:
                UARTSend("2");
                break;
            case 3:
                UARTSend("3");
                break; 
            case 4:
                UARTSend("4");
                break;
            case 5:
                UARTSend("5");
                break;
            case 6:
                UARTSend("6");
                break;
            case 7:
                UARTSend("7");
                break;
            case 8:
                UARTSend("8");
                break;
            case 9:
                UARTSend("9");
                break;
            case 10:
                UARTSend("A");
                break;
            case 11:
                UARTSend("B");
                break;
            case 12:
                UARTSend("C");
                break;
            case 13:
                UARTSend("D");
                break;
            case 14:
                UARTSend("E");
                break;
            case 15:
                UARTSend("F");
                break;
            default:
                UARTSend("X");
                break;
        }
        i++;
    }
}