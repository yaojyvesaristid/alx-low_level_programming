#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free a `listint_t` list and set the head to null
 * @h: double pointer to head of linked list
 * Return: size of the list that was free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *l, *temp;
	size_t len;

	len = 0;
	l = *h;
	while (l != NULL)
	{
		len++;
		temp = l;
		l = l->next;
		free(temp);

		if (temp < l)
			break;
	}
	*h = NULL;

	return (len);
}
