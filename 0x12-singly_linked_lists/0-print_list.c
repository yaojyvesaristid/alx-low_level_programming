#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *l = h;

	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);

		l = l->next;
		len++;
	}
	return (len);
}
