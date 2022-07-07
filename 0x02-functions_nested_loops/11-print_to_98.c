#include <stdio.h>
#include "main.h"
/*
 * print_to_98 - prints all natural numbers from n to 98
 * Description: Numbers must be separated by a comma, followed by space
 * numbers should be printed in order
 * the first printed number should be the number passed to your function
 * the last printed number should be 98
 * You are allowed to use the standard library.
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98");
}
