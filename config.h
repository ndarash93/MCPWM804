#ifndef CONFIG_H
#define CONFIG_H


#include <xc.h>
extern volatile unsigned int theta, update;

void oscSetup(void);
void ms_delay(int n);
void us_delay(int n);
void T5Setup(void);
void T2Setup(void);
void T4Setup(void);
#endif	/* XC_HEADER_TEMPLATE_H */

