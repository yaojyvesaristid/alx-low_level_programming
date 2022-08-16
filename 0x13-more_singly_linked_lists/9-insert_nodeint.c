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
	listint_t *l, *temp, *new;
	unsigned int count = 0;

	l = *head;
	if (l)
	{
		while (l != NULL)
		{
			if (count == idx - 1)
			{
				temp = l->next;
				break;
			}

			count++;
			l = l->next;
		}

		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = temp;
		l->next = new;
		return (*head);
	}
	return (NULL);

}
