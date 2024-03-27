


#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "led.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


//. Rewrite LED functions using BSRR register (instead of ODR register). On all LEDs for 500 ms and then Off all LEDs for 500 ms repeatedly.
int main(void)
{
	SystemInit();
	DelayMs(1);
	LedInit(LED_GREEN);
	LedInit(LED_ORANGE);
	LedInit(LED_RED);
	LedInit(LED_BLUE);
	while(1) {
		LedBlink(LED_GREEN, 500);
		LedBlink(LED_ORANGE, 500);
		LedBlink(LED_RED, 500);
		LedBlink(LED_BLUE, 500);
	}
	return 0;
}


