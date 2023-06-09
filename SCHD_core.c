/*
 * SCHD_core.c
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */
#include "stdint.h"
#include "SCHD_core.h"
#include "MCAL/GPIO/GPIO_core.h"

tasks_s Tasks[MAX_TASKS_NUMBER] = {
		{.cnt = 0,
		.task = GPIO_Main ,
		.ReadyFlag = 0,
		.active =1
		}
};
void SCHD_Task1sec(void)
{
	for(uint8_t i=0 ; i< MAX_TASKS_NUMBER ;i++ )
	{
		if (Tasks[i].active)
		{
			if (Tasks[i].cnt == 1000)
			{
				Tasks[i].ReadyFlag = 1;
			}
			else
			{
				Tasks[i].ReadyFlag = 0;
			}
			if (Tasks[i].ReadyFlag == 1)
			{
				Tasks[i].task();
				Tasks[i].ReadyFlag = 0;
				Tasks[i].cnt = 0;
			}
			else
			{
				Tasks[i].cnt++;
			}
		}
	}
}

