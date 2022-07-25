#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(*a) * size);
		if (a != NULL)
		{
			for (i = 0; i < size; i++)
				*(a + i) = c;
			return (a);
		}
	return (NULL);

}
