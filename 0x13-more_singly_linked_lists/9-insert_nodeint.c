#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @idx: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	temp = *head;
	for (count = 1; temp && count < idx; count++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		*head = new;
		new->next = temp;
	}
	else if (temp->next)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = NULL;
		temp->next = new;
	}

	return (new);
}
