#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails,
 * the process terminate with status value of 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
		return (ptr);
	exit(98);
}
