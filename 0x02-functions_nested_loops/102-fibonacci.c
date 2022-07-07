#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be separated by comma and space.
 * Return: 0
 */
int main(void)
{
	int cpt = 2;
	long int i = 1, j = 2, k;

	printf("%ld, ", i);
	while (cpt <= 50)
	{
		if (cpt == 50)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		k = j;
		j += i;
		i = k;
		cpt++;
	}
	return (0);
}
