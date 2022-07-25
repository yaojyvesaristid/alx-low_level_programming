#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */
char *_strdup(char *str)
{
	char *s;
	int i, size = 0;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			size++;
		if (size >= 0)
		{
			s = malloc(sizeof(*str) * size + 1);
			if (s != NULL)
			{
				for (i = 0; str[i] != '\0'; i++)
					*(s + i) = *(str + i);
				*(s + size) = '\0';
				return (s);
			}
		}
	}
	return (NULL);
}
