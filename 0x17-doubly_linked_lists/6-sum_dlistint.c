#include "lists.h"
/**
 * sum_dlistint - fonction that return a node at index
 * @head: List
 * Return: add
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (tmp->next)
	{
		tmp = tmp->next;
		i += tmp->n;
	}
	return (i);
}
