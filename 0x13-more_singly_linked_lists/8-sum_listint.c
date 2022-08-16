#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data of a 'listint_t' linked list
 * @head: head of a linked list
 * Return: sum of data or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *l;
	int sum = 0;

	l = head;
	if (l)
	{
		while (l != NULL)
		{
			sum += l->n;
			l = l->next;
		}
		return (sum);
	}
	return (0);

}
