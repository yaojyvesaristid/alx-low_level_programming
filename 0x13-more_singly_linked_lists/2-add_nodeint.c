#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the beginning of a 'listint_t' list
 * @head: pointer to pointer on the head of the list
 * @n: const value represent the data
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l = NULL;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
	{
		free(l);
		return (NULL);
	}
	l->n = n;
	l->next = *head;
	*head = l;

	return (*head);
}
