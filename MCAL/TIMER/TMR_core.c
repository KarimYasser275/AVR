/*
 * TMR_core.c
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */
#include "TMR_core.h"
#include "TMR_cfg.h"
#include "../MCAL.h"

void(*TMR0_Interrupt)(void);

void TMR0_Init(void)
{
#if TMR0_OP_MODE == FAST_PWM
	TCCR0 = 0b01101010;
#elif TMR0_OP_MODE == CTC
	TCCR0 = 0b00011100;
	OCR0 = 47;
	TIMSK |= 0b00000010;
#endif
}

void TMR0_InterruptHandler(void * pf)
{
	if (pf != NULL)
		TMR0_Interrupt = pf;
}

void __vector_11(void) __attribute__((signal , used));
void __vector_11(void)
{
	TMR0_Interrupt();

}
