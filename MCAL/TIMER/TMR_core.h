/*
 * TMR_core.h
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */

#ifndef MCAL_TIMER_TMR_CORE_H_
#define MCAL_TIMER_TMR_CORE_H_

enum TCCR2_bits
{
	CS20_BIT = 0,
	CS21_BIT,
	CS22_BIT,
	WGM21_BIT,
	COM20_BIT,
	COM21_BIT,
	WGM20_BIT,
	FOC2_BIT
}TCCR2_bits_e;

typedef enum
{
	NORMAL ,
	PWM    ,
	CTC    ,
	FAST_PWM
}TMR0_modes_e;


void TMR0_Init(void);
void TMR2_Init (void);

#endif /* MCAL_TIMER_TMR_CORE_H_ */
