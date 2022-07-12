#include "main.h"
/**
 * rev_string - reverse a string
 * @s: char array string type
*/
void rev_string(char *s)
{
	int i = 0, j, n;
	char temp;

	while (s[i] != '\0')
		i++;

	n = i;
	for (i = n - 1, j = 0; j < n / 2; i--, j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
