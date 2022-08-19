#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int nb_bits;

	if (n == 0)
	{
		printf("0");
		return;
	}
	temp = n;
	for (nb_bits = 0; (temp >> 1) > 0; nb_bits++)
		temp = temp >> 1;

	for (; nb_bits >= 0; nb_bits--)
	{
		if ((n >> nb_bits) & 1)
			printf("1");
		else
			printf("0");
	}
}
