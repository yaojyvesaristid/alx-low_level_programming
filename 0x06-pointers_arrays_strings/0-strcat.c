#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	int n, j;

	n = strlen(dest);
	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + n + j) = *(src + j);
	}
	*(dest + n + j) = '\0';
	return (dest);
}
