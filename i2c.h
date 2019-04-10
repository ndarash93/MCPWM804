#ifndef I2C_H
#define I2C_H


#define SLAVE_ADDRESS 0x78
#define CONTROL_BYTE 0b00000000
#define BAUD_400K 46
#define BAUD_100K 400



#include <xc.h>



void i2cSetup(void);
void i2cSend(char data);





extern unsigned char oled[8][128];




#endif	/* XC_HEADER_TEMPLATE_H */

