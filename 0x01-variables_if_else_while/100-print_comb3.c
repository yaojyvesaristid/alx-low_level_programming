#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible different combination of two digits
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits 0 and 1
 * Print only the smallest combination of two digits
 * Number should be printed in ascending order with two digits
 * Use only putchar function
 * Number must be separated by ',' followed by a space.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (j != 9 || i != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
