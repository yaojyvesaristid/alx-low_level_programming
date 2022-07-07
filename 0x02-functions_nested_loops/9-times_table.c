#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 */

void times_table(void)
{
	int num1 = 0;
	int num2;
	int res;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			res = num1 * num2;
			if (res > 9)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else if (num2 != 0)
			{
				_putchar(32);
				_putchar(res + '0');							}
			else
			{
				_putchar(res + '0');
			}
			if (num2 != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}

}


