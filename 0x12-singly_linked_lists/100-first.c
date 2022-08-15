#include <stdio.h>

/**
 * myStartMess - Print statement within this fxn before running main fxn.
 */
void myStartMess(void) __attribute__ ((constructor));

void myStartMess(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
