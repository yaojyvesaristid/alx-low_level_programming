#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *l = h;

	while (l != NULL)
	{
		l = l->next;
		len++;
	}
	return (len);
}


