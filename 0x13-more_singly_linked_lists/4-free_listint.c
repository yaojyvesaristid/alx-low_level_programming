#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a 'listint_t' list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	l = head;
	while (l != NULL)
	{
		head = head->next;
		free(l);
		l = head;
	}
}
