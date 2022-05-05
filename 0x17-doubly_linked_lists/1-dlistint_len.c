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
	return (i);
}
