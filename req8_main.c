/*
 * gpio challenge.c
 *
 * Created: 1/18/2020 11:34:52 AM
 * Author : ahmed
 */ 
#include "registers.h"
#include "gpio.h"
#include "softwareDelay.h"
#include "led.h"
#include "pushButton.h"

int main(void)
{
    Led_Init(LED_0);
	pushButtonInit(BTN_0);
	gpioPinWrite(GPIOC,BIT4,HIGH);
	uint8_t volatile pressCounter=1;
	uint16_t volatile delayCounter;
	uint8_t buttonStatus;
   /* while (1) 
    {
		Led_Off(LED_0);
		buttonStatus = pushButtonGetStatus(BTN_0);
		
		
		if (buttonStatus == Pressed)
		{
			Led_On(LED_0);
			
			for(delayCounter=0;delayCounter<20;delayCounter++)
			{
				
				buttonStatus = pushButtonGetStatus(BTN_0);
				if (buttonStatus == Pressed)
				{
					
					pressCounter++;
					
				}
			}
			
			if (pressCounter >1)
			softwareDelayMs(1000);
			
			Led_Off(LED_0);
		}
		
		
		
    }*/
   
   while(1)
   {
	   Led_On(LED_0);
	   softwareDelayMs(1000);
	   Led_Off(LED_0);
	   softwareDelayMs(1000);
   }
	
	return 0; 
   
}

