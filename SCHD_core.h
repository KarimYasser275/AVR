/*
 * SCHD_core.h
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */

#ifndef SCHD_CORE_H_
#define SCHD_CORE_H_

typedef void (* callback)(void);
typedef struct
{
	uint64_t cnt;
	callback task;
	uint8_t	 active;
	uint8_t	 ReadyFlag;

}tasks_s;

typedef enum
{
	TASK_1 =0,
	MAX_TASKS_NUMBER
}tasks_e;
void SCHD_Task1sec(void);
#endif /* SCHD_CORE_H_ */
