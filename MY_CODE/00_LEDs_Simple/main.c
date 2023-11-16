/*
 * main.c
 *
 *
 * Author: Ahmed Hassan Salama
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "LED_interface.h"

#include <util/delay.h>

LED_Type LED1 = {LED_PORTA,LED_PIN0,ACTIVE_HIGH};

void main(void)
{
	/* Set Pin A0 as Output Pin */
	LED_voidInit(LED1);

	/* Toggle forever */
	while(1)
	{
		LED_voidToggle(LED1);
		_delay_ms(1000);
	}
}

