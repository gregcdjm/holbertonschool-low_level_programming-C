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
	size_t ok, a = index;

	ok = dlistint_len(*head);
	if (ok < index || *head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (ok != 1)
		{
			(*head)->prev->next = NULL;
			(*head)->prev = NULL;
		}
		return (1);
	}
	while (index >= 1)
	{
		index--;
		(*head) = (*head)->next;
	}
	(*head)->prev->next = (*head)->next;
	(*head)->next = (*head)->prev;
	while (index < a)
	{
		index++;
		(*head) = (*head)->prev;
	}
	return (1);
}
