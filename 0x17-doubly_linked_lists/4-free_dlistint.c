#include "lists.h"
#include <string.h>

/**
 * free_list - print element of structure list
 * @head: what to print (with .str .len)
 * Return: the number of nodes
 */

void free_list(sigset_t *head)
{
	list_t *s;

	for (; head;)
	{
		s = head->next;
		free(head->str);
		free(head);
		head = s;
	}
}
