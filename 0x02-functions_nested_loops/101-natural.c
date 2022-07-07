#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int somme = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			somme += i;
		else if (i % 5 == 0)
			somme += i;
		i++;
	}
	printf("%d\n", somme);
	return (0);
}
