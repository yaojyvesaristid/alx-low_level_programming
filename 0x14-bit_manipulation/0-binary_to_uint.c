#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, power;
	int i, j, k;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	n = 0;
	for (i = i - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
		{
			power = 1;
			for (k = 1; k <= j; k++)
				power = power * 2;
			n += power;
		}
	}
	return (n);

}
