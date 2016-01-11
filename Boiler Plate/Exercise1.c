/* 
* Author: Chris Nicholas
* Exercise 1: Program LED’s to display the following pattern:
* a)	Turn all LED’s on
* b)	Turn LED 0 off
* c)	Repeat for all other LED’s until all LED’s are off
* d)	Turn LED0 on
* e)	Repeat for all other LED’s until all LED’s are on
* f)	Repeat (b) to (e) 3 times
*/

#include "GLCD.h" 
#include "LCD_Functions.h" /* Function prototypes for LCD */
#include "LED_Functions.h" /* Function prototypes for LED's */
#include "clock.h"

#define DELAYLENGTH 5

void exercise1(void) {
	int t, u; // Loop counters
	
	GLCD_Clear(White);                    /* Clear graphical LCD display        */
	GLCD_SetBackColor(Blue);
	GLCD_SetTextColor(White);
	GLCD_DisplayString(0, 0, __FI, "   < Exercise 1 >   ");
	GLCD_DisplayString(1, 0, __FI, " By Chris Nicholas  ");
	GLCD_DisplayString(2, 0, __FI, "====================");
	
	All_LEDs_On(); // Turn all LEDs on
	
	for(t = 0; t < 3; t++) { // Main outer loop
		
		delayShort(DELAYLENGTH);
		
		for(u = 0; u < 8; u++) {
			LED_Off(u);
			delayShort(DELAYLENGTH);
		}
		
		for(u = 0; u < 8; u++) {
			LED_On(u);
			delayShort(DELAYLENGTH);
		}
	}	
}
