#include "lists.h"

/**
 * print_list - print element of structure list
 * @h: what to print (with .str .len)
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (i);
}
