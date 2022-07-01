#include <stdio.h>

/**
 *main - main block
 * Description: Use `putchar` function to print the reverse alphabet.
 * Return: 0
 */
int main(void)
{
	int lettre;

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
