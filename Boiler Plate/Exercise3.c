/* 
* Author: Alexander Keidel
* Exercise 3: Program LEDs to display binary count starting from 0 (all LED’s off) to 255 (all LED’s on).
*/

#include "GLCD.h" 
#include "LCD_Functions.h" /* Function prototypes for LCD */
#include "LED_Functions.h" /* Function prototypes for LED's */
#include "clock.h"

#define LEDCOUNT 8 //number of LEDs on the device

void exercise3(void) {
	int i, l; //loop counters
	
	GLCD_Clear(White);                    /* Clear graphical LCD display        */
	GLCD_SetBackColor(Blue);
	GLCD_SetTextColor(White);
	GLCD_DisplayString(0, 0, __FI, "   < Exercise 3 >   ");
	GLCD_DisplayString(1, 0, __FI, " By Alexander Keidel");
	GLCD_DisplayString(2, 0, __FI, "====================");
	
	for(i = 0; i <= 255; i++){ //loop 255 times to count up
		delayShort(2); //delay for 2 tenths of a second
		All_LEDs_Off(); // turn off all LEDs
		for(l = 0; l < LEDCOUNT; l++){ //count through the LEDs and decide to turn them on or off
					if((1 << l) & i){ //if the number (i) has the bit set at the position of 2 to the power of l, i.e. decimal number 8 would have the bit at position "2 to the power of 3" set. This means decimal 8 would look like this: 0000 1000
						LED_On(l);
					}
					//if it is not contained in the number, don't turn the LED on	
		}
	}
}
