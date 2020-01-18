/*
* REQ7 DIO TIMER CHALLENGE.c
*
* Created: 1/18/2020 10:25:56 PM
* Author : ahmed
*/

#include "std_types.h"
#include "registers.h"
#include "sevenSeg_BCD.h"
#include "sevenSeg_BCD_CFG.h"
#include "softwareDelay.h"


int main(void)
{
	sevenSegInit(SEG_0);
	sevenSegInit(SEG_1);
	uint8_t FirstDigit, SecondDigit, DelayCounter;

	while(1)
	{
		for (SecondDigit = 0; SecondDigit < 10; SecondDigit++)
		{
			
			for (FirstDigit = 0; FirstDigit <10; FirstDigit++)
			{
				for(DelayCounter = 0; DelayCounter < 50; DelayCounter++)
				{
					sevenSegWrite(SEG_1,SecondDigit);
					softwareDelayMs(10);
					sevenSegWrite(SEG_0,FirstDigit);
					softwareDelayMs(10);
				}
			}
		}
	}
}

