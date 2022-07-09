#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n : int type number
 * Description: use only _putchar to print
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
