#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int lettre;
	int i = 0;

	while (i < 10)
	{
		lettre = 'a';
		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		i++;
		_putchar('\n');
	}
}
