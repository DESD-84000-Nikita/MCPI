/*
 * timer.h
 *
 *  Created on: Apr 11, 2024
 *      Author: sunbeam
 */

#ifndef TIMER_H_
#define TIMER_H_


#include "stm32f4xx.h"
#include "stm32f407xx.h"

#define TCLK		16000000
#define TIM_PR		16000

void TimerInit(uint32_t ms);
extern int count;


#endif /* TIMER_H_ */
