#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: char string to copy to
 * @src: char string
 * @n: number of elements to copy in
 * Return: pointer to resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		*(dest + j) = *(src + j);
	}
	*(dest + j) = '\0';
	return (dest);
}
