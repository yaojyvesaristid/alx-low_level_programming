#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a 'listint_t' linked list
 * @head: double pointer to the head of the list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l, *temp;

	l = *head;
	if (l == NULL)
		return (NULL);
	else if (l->next == NULL)
		return (*head);

	(*head) = l->next;
	l->next = NULL;
	while ((*head) != NULL)
	{
		if ((*head)->next != NULL)
		{
			temp = (*head)->next;
			(*head)->next = l;
			l = (*head);
			(*head) = temp;
		}
		else
		{
			(*head)->next = l;
			return (*head);
		}
	}
	return (*head);
}
