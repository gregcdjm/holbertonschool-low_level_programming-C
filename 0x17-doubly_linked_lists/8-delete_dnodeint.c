#include "lists.h"
/**
 * dlistint_len - fonction that count the size of the Dlist
 * @h: List to count
 * Return: Number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	while (h)
	{
		h = h->prev;
	}
	return (i);
}

/**
 * delete_dnodeint_at_index - fonction that return a node at index
 * @head: List
 * @index: index
 * Return: add
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t ok;
	dlistint_t *tmp = *head;
	unsigned int i;

	ok = dlistint_len(*head);
	if (ok < index || *head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
