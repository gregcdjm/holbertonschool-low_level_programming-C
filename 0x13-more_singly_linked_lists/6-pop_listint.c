#include "lists.h"

/**
 * pop_listint - fonction
 * @head: param
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (i);
}
