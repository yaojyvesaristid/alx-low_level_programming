#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size * size; j += size + 1)
	{
		sum1 += a[j];
	}
	for (j = size; j < size * size; j += size - 1)
	{
		sum2 += a[j - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}

