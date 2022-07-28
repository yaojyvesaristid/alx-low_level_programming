#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: unsigned int, number of elements
 * @size: unsigned int, size of each element
 * Return: Null if error, else pointer to malloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		for (i = 0; i < nmemb; i++)
			ptr[i] = 0;
	return (ptr);

	return (NULL);
}
