#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */
char *leet(char *s)
{
	char lettres[] = {a, e, o, t, l};
	int values[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < strlen(lettres); j++)
		{
			if (s[i] == lettre[j] || s[i] == toupper(lettre[j]))
			{
				s[i] = values[j];
			}
		}
	}
	return (s);
}
