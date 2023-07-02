/*
 * SCHD_core.c
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */
#include "stdint.h"
#include "SCHD_core.h"
#include "MCAL/GPIO/GPIO_core.h"

extern tasks_s Tasks[MAX_TASKS_NUMBER];

void SCHD_Main(void)
{
	for(uint8_t i=0 ; i< MAX_TASKS_NUMBER ;i++ )
	{
		if (Tasks[i].active == TASK_ACTIVE)
		{
			if (Tasks[i].cnt == Tasks[i].periodicity_ms)
			{
				Tasks[i].ReadyFlag = TASK_READY;
			}
			else
			{
				Tasks[i].ReadyFlag = TASK_NOT_READY;
			}

			if (Tasks[i].ReadyFlag == TASK_READY)
			{
				Tasks[i].task();
				Tasks[i].ReadyFlag = TASK_NOT_READY;
				Tasks[i].cnt = 0;
			}
			else
			{
				Tasks[i].cnt++;
			}
		}
	}
}
