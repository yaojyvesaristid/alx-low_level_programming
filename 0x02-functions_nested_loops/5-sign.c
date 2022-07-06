#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @num: type int integer
 * Description: print +, 0, or - depending on number
 * Return: 1 if +, 0 if 0, and -1 if -
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
