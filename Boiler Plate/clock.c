#include "clock.h"

extern unsigned char clock_1s;

//This function delays program by secs seconds. This function relies on
//a timer which is used to produce an interrupt at regular intervals. See
//further down for the way this timer is activated. The timer interrupt
//handler is in IRQ.c source file. You need to supply the code for this
//interrupt (this is a vectored interrupt) in order for this function
//to work. 
void delay (int secs) {
	delayShort(secs * 10);
}

// Delay for delay * 10ths of a second
void delayShort(int delay) {
	int n;
	
	//Repeat the following secs times

	for (n = 0; n < delay; n++) {
		//First reset clock_1s
		clock_1s = 0;
		//Wait for it to be set after 1 sec	(refer to IRQ.c)
		while (!clock_1s);
	}
}
