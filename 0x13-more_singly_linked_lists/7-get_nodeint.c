#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a 'listint_t' linked list
 * @head: head of a linked list
 * @index: int value representing the index of the node
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l;
	int count = 0;

	l = head;
	if (l)
	{
		while (l != NULL)
		{
			if (count == index)
			{
				return (l);
			}
			count++;
			l = l->next;
		}
	}
	return (NULL);
}

