#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a 'listint_t' linked list
 * @head: double linke list represented head of the list
 * Return: data of the head or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *l;
	int n;

	l = *head;
	if (l)
	{
		*head = (*head)->next;
		n = l->n;
		free(l);
		return (n);
	}
	return (0);
}


