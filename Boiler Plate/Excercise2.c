/* 
* Author: Tom Needham (22416714)
* Exercise 2: Program LED’s to display the following pattern
*
* a)	Turn all LED’s off
* b)	Turn LED’s 0,1,2 on
* c)	Turn LED’s 0,1,2 off
* d)	Turn LED’s 3,4,5 on
* e)	Turn LED’s 3,4,5 off
* f)	Turn LED’s 6,7,0 on
* g)	Turn LED’s 6,7,0 off
* h)	Turn LED’s 1,2,3 on
* i)	Turn LED’s 1,2,3 off
* j)	Repeat pattern
*
*/
#include "GLCD.h"						/* Required for the LCD screen		  */
#include "LED_Functions.h" /* Function prototypes for LED's */
#include "LCD_Functions.h"
#include "clock.h"

#define DELAY 5

void exercise2(void) {
	int i = 0;
	GLCD_Clear(White);                    /* Clear graphical LCD display        */
	GLCD_SetBackColor(Blue);
	GLCD_SetTextColor(White);
	GLCD_DisplayString(0, 0, __FI, "   < Exercise 2>    ");
	GLCD_DisplayString(1, 0, __FI, " By Thomas Needham  ");
	GLCD_DisplayString(2, 0, __FI, "====================");
	for( i = 0; i < 3; i++){ // Main outer loop
		All_LEDs_Off(); // Turn all LEDs on
		//Turn LED’s 0,1,2 on
		LED_On(0);
		delayShort(DELAY);
		LED_On(1);
		delayShort(DELAY);
		LED_On(2);
		delayShort(DELAY);
			//Turn LED’s 0,1,2 off
		LED_Off(0);
		delayShort(DELAY);
		LED_Off(1);
		delayShort(DELAY);
		LED_Off(2);
		delayShort(DELAY);
		
		//Turn LED’s 3,4,5 on
		LED_On(3);
		delayShort(DELAY);
		LED_On(4);
		delayShort(DELAY);
		LED_On(5);
		delayShort(DELAY);
		
		//Turn LED’s 3,4,5 off
		LED_Off(3);
		delayShort(DELAY);
		LED_Off(4);
		delayShort(DELAY);
		LED_Off(5);
		delayShort(DELAY);
		
		//Turn LED’s 6,7,0 on
		LED_On(6);
		delayShort(DELAY);
		LED_On(7);
		delayShort(DELAY);
		LED_On(0);
		delayShort(DELAY);
		//Turn LED’s 6,7,0 off
		LED_Off(6);
		delayShort(DELAY);
		LED_Off(7);
		delayShort(DELAY);
		LED_Off(0);
		delayShort(DELAY);
		
		//Turn LED’s 1,2,3 on
		LED_On(1);
		delayShort(DELAY);
		LED_On(2);
		delayShort(DELAY);
		LED_On(3);
		delayShort(DELAY);
		
		//Turn LED’s 1,2,3 off
		LED_Off(1);
		delayShort(DELAY);
		LED_Off(2);
		delayShort(DELAY);
		LED_Off(3);
		delayShort(DELAY);
		}
		
	}
