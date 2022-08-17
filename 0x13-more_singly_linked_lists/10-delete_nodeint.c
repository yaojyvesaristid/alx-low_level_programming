#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete the node at index of a `listint_t` list
 * @head: double header to head of linked list
 * @index: index of node to delete, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *l;
	listint_t *temp;
	unsigned int i;

	i = 0;
	l = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		temp = l;
		if (l->next)
			l = l->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = l->next;
	else if (l->next)
		temp->next = l->next;
	else
		temp->next = NULL;

	free(l);
	return (1);
}
