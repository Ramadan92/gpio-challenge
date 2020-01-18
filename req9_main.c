/*
 * REQ9 DIO TIMER CHALLENGE.c
 *
 * Created: 1/18/2020 9:54:07 PM
 * Author : ahmed
 */ 

#include "std_types.h"
#include "registers.h"
#include "led.h"
#include "softwareDelay.h"

int main(void)
{
    Led_Init(LED_1);
	Led_Init(LED_2);
	Led_Init(LED_3);
    while (1) 
    {
		Led_On(LED_1);
		softwareDelayMs(1000);
		Led_Off(LED_1);
		
		Led_On(LED_3);
		softwareDelayMs(1000);
		Led_Off(LED_3);
		
		Led_On(LED_2);
		softwareDelayMs(1000);
		Led_Off(LED_2);
    }
	
	return 0;
}

