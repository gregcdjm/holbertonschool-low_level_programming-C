#include "lists.h"
/**
 * print_dlistint - fonction print Dlist
 * @h: List
 * Return: Number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
