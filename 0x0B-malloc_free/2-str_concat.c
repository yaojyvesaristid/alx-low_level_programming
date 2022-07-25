#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		size++;
	for (i = 0; s2[i] != '\0'; i++)
		size++;
	if (size >= 0)
	{
		str = malloc(sizeof(*s1) * size + 1);
		if (str != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
				*(str + i) = *(s1 + i);
			for (i = i, j = 0; i < size; i++, j++)
				*(str + i) = *(s2 + j);
			*(str + i) = '\0';
			return (str);
		}
	}
	return (NULL);

}
