#include <stdio.h>

/**
 *main - main block
 * Description: Use `putchar` function to print the alphabet
 * in lowercase and UPPERCASE.
 * Return: 0
 */
int main(void)
{
	int lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}
	for (lettre = 'A'; lettre <= 'Z'; lettre++)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
