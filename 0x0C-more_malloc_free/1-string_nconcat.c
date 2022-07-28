#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenate 2 strings, with the first n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int, bytes to concatenate from s2
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int sizeS1 = 0, sizeS2 = 0, size = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		sizeS1++;
	for (i = 0; s2[i] != '\0'; i++)
		sizeS2++
			if (n >= sizeS2)
				n = sizeS2;
	size = sizeS1 + n;

	ptr = malloc(sizeof(*ptr) * size + 1);
	if (ptr != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			*(ptr + i) = s1[i];
		for (j = i; j < size; j++)
			*(ptr + j) = s2[j - i];
		*(ptr + size) = '\0';
		return (ptr);
	}
	return (NULL);
}
