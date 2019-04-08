  
#ifndef DMA_H
#define	DMA_H

#include <xc.h>

extern volatile unsigned int bufferADC[4] __attribute__((space(dma)));


void dmaSetup(void);


#endif	/* XC_HEADER_TEMPLATE_H */

