#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible different combination of two digits
 * The numbers should be separated by a space
 * All number should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma followed by space
 * The combination of number should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the number 0 and 1
 * Use only putchar function 8 times maximum in this code.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < 10)
				putchar('0');
			putchar((i / 10) + '0');
			putchar(32);
			if (j < 10)
				putchar('0');
			putchar((j + '0');
			if (i != 98 || j != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
