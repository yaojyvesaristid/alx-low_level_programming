#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */
char *leet(char *s)
{
	char lettres[] = {'a', 'e', 'o', 't', 'l'};
	char LETTRES[] = {'A', 'E', 'O', 'T', 'L'};
	int values[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lettres[j] || s[i] == LETTRES[j])
			{
				s[i] = values[j];
			}
		}
	}
	return (s);
}
