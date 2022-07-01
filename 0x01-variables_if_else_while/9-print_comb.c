#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base 10
 * Number should be printed in ascending order
 * Number must be separated by ',' followed by a space.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
