#include <stdio.h>

/**
 *main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase
 * except the letters 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e' && lettre != 'q')
			putchar(lettre);
	}
	putchar('\n');
	return (0);
}
