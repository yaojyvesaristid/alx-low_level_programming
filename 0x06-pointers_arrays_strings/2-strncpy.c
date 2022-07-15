#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: char string to copy to
 * @src: char string
 * @n: number of elements to copy
 * Return: pointer to resulting string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
