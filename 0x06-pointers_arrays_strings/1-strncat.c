#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, j;

	l = strlen(dest);
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		*(dest + l + j) = *(src + j);
	}
	*(dest + l + j) = '\0';
	return (dest);
}
