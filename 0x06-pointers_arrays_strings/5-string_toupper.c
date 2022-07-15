#include "main.h"
/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: lettre
 */
char *string_toupper(char *lettre)
{
	int i;

	for (i = 0; lettre[i] != '\0'; i++)
	{
		if (lettre[i] > 96 && lettre[i] < 123)
		{
			lettre[i] = lettre[i] - 32;
		}
	}
	return (lettre);
}
