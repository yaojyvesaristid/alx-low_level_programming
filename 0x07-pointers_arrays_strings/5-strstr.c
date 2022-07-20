#include "main.h"
#include <stddef.h>
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
				&& needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
