#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */
void print_rev(char *s)
{
	int i = 0, n;

	while (s[i] != '\0')
		i++;
	n = i;
	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
