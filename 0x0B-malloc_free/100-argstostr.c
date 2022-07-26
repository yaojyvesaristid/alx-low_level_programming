#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, nbchar = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, nbchar++)
			;
		nbchar++;
	}
	nbchar++;

	str = malloc(nbchar * sizeof(char));
	if (str == NULL)
		return (NULL);

	s = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*str = *(*(av + i) + j);
			str++;
		}
		*str = '\n';
		str++;
	}

	return (s);
}
