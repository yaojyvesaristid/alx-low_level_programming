#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n : int type number
 * Description: use only _putchar to print
 */
void print_diagonal(int n)
{
	int i = 2, count = 0, k;

	if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else if (n > 1)
	{
		_putchar('\\');
		while (i <= n)
		{
			k = 0;
			count++;
			while (k < count)
			{
				_putchar(' ');
				k++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
