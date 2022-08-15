#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *l;
	size_t len = 0;

	l = h;
	while (l != NULL)
	{
		printf("%d\n", l->n);
		l = l->next;
		len++;
	}

	return (len);
}
