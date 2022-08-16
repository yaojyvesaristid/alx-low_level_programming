#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a 'listint_t' list
 * @head: pointer to pointer on a head of a list
 * @n: const value represents the data
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l, *temp;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
	{
		free(l);
		return (NULL);
	}
	l->n = n;
	l->next = NULL;

	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	if (temp)
		temp->next = l;
	else
		*head = l;

	return (*head);
}
