#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - find the number of elements in a linked `listint_t` list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *l;
	size_t len = 0;

	l = h;
	while (l != NULL)
	{
		l = l->next;
		len++;
	}

	return (len);
}
