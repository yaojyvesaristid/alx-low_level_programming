#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a `listint_t` list
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
		return;

	l = *head;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(l);
		l = *head;
	}
}
