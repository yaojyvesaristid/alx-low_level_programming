#include <stdio.h>

/**
 *main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	int lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
