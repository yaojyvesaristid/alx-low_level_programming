#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalize all words of a string
 * @s: string
 * Return: `s`
 */
char *cap_string(char *s)
{
	int i, c;
	int joker;
	char nots[] = "\n\t,;.!?(){}\" ";

	for (i = 0, joker = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			joker = 1;
		for (c = 0; nots[c] != '\0'; c++)
		{
			if (nots[c] == s[i])
				joker = 1;
		}

		if (joker)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] = toupper(s[i]);
				joker = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				joker = 0;
			else if (s[i] > 47 && s[i] < 58)
				joker = 0;
		}
	}
	return (s);
}
