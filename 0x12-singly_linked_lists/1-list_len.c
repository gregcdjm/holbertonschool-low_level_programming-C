#include "lists.h"

/**
 * list_len - print element of structure list
 * @h: what to print (with .str .len)
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		/*	if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);*/
	}
	return (i);
}
