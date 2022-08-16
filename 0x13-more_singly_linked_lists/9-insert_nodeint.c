#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l, *temp, *new;
	unsigned int count = 0;

	l = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (l)
	{
		if (idx == 0)
		{
			new->next = l;
			*head = new;
			return (*head);
		}
		else
		{
			while (l != NULL)
			{
				if (count == index - 1)
				{
					temp = l->next;
					break;
				}

				count++;
				l = l->next;
			}

			if (l == NULL)
			{
				return NULL;
			}
			else
				(
				 l->next = new;
				 new->next = temp;
				 return (*head);
				)
		}
	}

	return (NULL);


}
