#include "main.h"
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n < 15)
	{
		i = 0;
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (res > 99)
				{
					_putchar(res / 100 + '0');
					_putchar((res / 10 % 10) + '0');
					_putchar(res % 10 + '0');
				}
				else if (res > 9)
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else
					_putchar(res + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			i++;
		}
	}
}
