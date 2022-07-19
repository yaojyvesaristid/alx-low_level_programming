#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to locate
 * Return: NULL if char not found, or pointer to first occurrence of char c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
