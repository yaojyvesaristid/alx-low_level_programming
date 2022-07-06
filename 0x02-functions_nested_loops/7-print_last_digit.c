#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: int type number
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int ln;

	if (num < 0)
	{
		ln = -1 * (num % 10);
		_putchar(ln + '0');
		return (ln);
	}
	else
	{
		ln = num % 10;
		_putchar(ln + '0');
		return (ln);
	}
}
