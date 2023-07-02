/*
 * SCHD_cfg.c
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */
#include "stdint.h"
#include "MCAL/MCAL.h"
#include "SCHD_core.h"
#include "./MCAL/GPIO/GPIO_core.h"
#include "MCAL/ADC/ADC_core.h"
#include "MCAL/PWM/PWM_core.h"
#include "Application.h"
extern void ADC_StartConversion(void);
extern void GPIO_Main (void);

tasks_s Tasks[MAX_TASKS_NUMBER] = {
		{
			.periodicity_ms = 10,
			.cnt = 0,
			.task = ADC_StartConversion ,
			.ReadyFlag = TASK_NOT_READY,
			.active =TASK_ACTIVE

		},
		{
			.periodicity_ms = 1000,
			.cnt = 0,
			.task = App_1 ,
			.ReadyFlag = TASK_NOT_READY,
			.active =TASK_ACTIVE

		}

};

