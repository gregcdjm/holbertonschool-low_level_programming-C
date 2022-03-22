#include "lists.h"

/**
 * listint_len - show the lenght
 * @h: the lenght
 * Return: lenght
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
		h = h->next, i++;
	return (i);
}
