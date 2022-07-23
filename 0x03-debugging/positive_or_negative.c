#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - print the sign of a given number
 * Description: Get a number and print if it is positive, negative
 * or zero
 */
void positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
