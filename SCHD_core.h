/*
 * SCHD_core.h
 *
 *  Created on: Jun 9, 2023
 *      Author: user
 */

#ifndef SCHD_CORE_H_
#define SCHD_CORE_H_

#define TASK_ACTIVE     1
#define TASK_INACTIVE   0
#define TASK_READY		1
#define TASK_NOT_READY	0
typedef void (* callback)(void);
typedef struct
{
	uint16_t cnt;
	uint16_t  periodicity_ms;
	uint8_t	 active;
	uint8_t	 ReadyFlag;
	callback task;

}tasks_s;

typedef enum
{
	TASK_1 =0,
	TASK_2,
	MAX_TASKS_NUMBER
}tasks_e;
void SCHD_Main(void);
#endif /* SCHD_CORE_H_ */
