#ifndef TIMER_H_
#define TIMER_H_
#include <avr/io.h>
#include <avr/interrupt.h>
#include "std_macros.h"
#include "STD_Types.h"


void timer0_initializeCTC(void);
void timer0_stop(void);
void timer_initializefastpwm(void);
void change_dutycycle(float64 duty);

#endif 
