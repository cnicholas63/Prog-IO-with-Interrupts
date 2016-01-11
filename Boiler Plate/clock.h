// Delays for delay * tenths of a second
void delayShort(int delay);

//This function delays program by secs seconds. This function relies on
//a timer which is used to produce an interrupt at regular intervals. See
//further down for the way this timer is activated. The timer interrupt
//handler is in IRQ.c source file. You need to supply the code for this
//interrupt (this is a vectored interrupt) in order for this function
//to work. 
void delay (int secs); 
