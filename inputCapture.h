  
#ifndef INPUTCAPTURE_H
#define	INPUTCAPTURE_H

#include <xc.h>

#include "dma.h"


extern volatile unsigned int hall_A, hall_B, hall_C, timeStep;
extern volatile int position, speed, calculatedPosition, distance, step, send;

extern volatile float fPos, fSpeed, fCalc, fDistance, fTheta, fOmega;

extern float alpha, beta, command_D, command_Q, i_D, i_Q;
extern float error_D, error_Q, integral_D, integral_Q, u_D, u_Q, i_A, i_B, i_C;


void inputCaptureSetup(void);


#endif	/* XC_HEADER_TEMPLATE_H */

