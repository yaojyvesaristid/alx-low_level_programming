#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible different combination of three digits
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Number should be printed in ascending order with three digits
 * Use only putchar function six times maximum
 * Number must be separated by ',' followed by a space.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (k != 9 || j != 8 || i != 7)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
