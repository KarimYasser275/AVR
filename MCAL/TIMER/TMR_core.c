/*
 * TMR_core.c
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */
#include "TMR_core.h"
#include "TMR_cfg.h"
#include "../MCAL.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "../ADC/ADC_core.h"

void(*TMR0_Interrupt)(void);

void TMR2_Init (void)
{
	TCNT2 = 0 ;
	TCCR2 = 0x0;
	OCR2  =0x0;


	TCCR2 |= (1 << CS20_BIT )
			|(1 << CS21_BIT)
			|(0 << CS22_BIT)
			|(1 << WGM21_BIT)
			|(0 << COM20_BIT)
			|(1 << COM21_BIT)
			|(1 << WGM20_BIT)
			|(0 << FOC2_BIT);
	OCR2 = 205;
	TIMSK = 0b00000010;
	ASSR  |=0;
}

void TMR0_Init(void)
{
	TCNT0 = 0 ;
	TCCR0 = 0x0;
	OCR0  =0x0;
	TIMSK =0x0;


	TCCR0 |= 0b10011100;
	OCR0 = 47;
	TIMSK = 0b00000010;
}

void TMR0_InterruptHandler(void * pf)
{
	if (pf != NULL)
		TMR0_Interrupt = pf;
}

//void __vector_11(void) __attribute__((signal , used));
//void __vector_11(void)
//{
//	TMR0_Interrupt();
//
//}

void __vector_10(void) __attribute__((signal , used));
void __vector_10(void)
{

	TMR0_Interrupt();

}
