#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Print a `listint_t` linked list with mem addresses
 * @head: head of linked list
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *l;
	size_t len;
	const listint_t *temp;

	l = head;
	if (l == NULL)
		exit(98);

	len = 0;
	while (l != NULL)
	{
		temp = l;
		l = l->next;
		len++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < l)
		{
			printf("-> [%p] %d\n", (void *)l, l->n);
			break;
		}
	}

	return (len);
}
