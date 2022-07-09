#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char chaine[] = "_putchar";
	int cpt = 0;

	while (chaine[cpt] != '\0')
	{
		_putchar(chaine[cpt]);
		cpt++;
	}
	_putchar('\n');

	return (0);
}
