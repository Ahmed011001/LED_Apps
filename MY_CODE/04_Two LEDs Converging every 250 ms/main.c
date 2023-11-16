/*
 * main.c
 *
 *  LEDs_App_4
 *  Author: Ahmed Hassan Salama
 */

#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"LED_interface.h"

#include"util/delay.h"

int main(void)
{
	LED_Type LED0 = {LED_PORTA,LED_PIN0,ACTIVE_HIGH};
	LED_Type LED1 = {LED_PORTA,LED_PIN1,ACTIVE_HIGH};
	LED_Type LED2 = {LED_PORTA,LED_PIN2,ACTIVE_HIGH};
	LED_Type LED3 = {LED_PORTA,LED_PIN3,ACTIVE_HIGH};
	LED_Type LED4 = {LED_PORTA,LED_PIN4,ACTIVE_HIGH};
	LED_Type LED5 = {LED_PORTA,LED_PIN5,ACTIVE_HIGH};
	LED_Type LED6 = {LED_PORTA,LED_PIN6,ACTIVE_HIGH};
	LED_Type LED7 = {LED_PORTA,LED_PIN7,ACTIVE_HIGH};

	LED_Type arr[]={LED0,LED1,LED2,LED3,LED4,LED5,LED6,LED7};

	for(int i=0;i<=7;i++)
	{
		LED_voidInit(arr[i]);
	}

	int led;
	while(1)
	{
		for(led=0;led<=3;led++)
			{
				LED_voidOn(arr[led]);
				LED_voidOn(arr[7-led]);
				_delay_ms(250);
				LED_voidOff(arr[led]);
				LED_voidOff(arr[7-led]);

			}
	}
}



