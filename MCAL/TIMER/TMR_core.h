/*
 * TMR_core.h
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */

#ifndef MCAL_TIMER_TMR_CORE_H_
#define MCAL_TIMER_TMR_CORE_H_

typedef enum
{
	NORMAL ,
	PWM    ,
	CTC    ,
	FAST_PWM
}TMR0_modes_e;


void TMR0_Init(void);


#endif /* MCAL_TIMER_TMR_CORE_H_ */
