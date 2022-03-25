#include "lists.h"
#include <string.h>

/**
 * add_node_end - print element of structure list
 * @head: what to print (with .str .len)
 * @str: new string
 * Return: the number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s, *j;
	unsigned int i = 0;

	for (; str[i]; i++)
		;

	s = malloc(sizeof(list_t));

	if (s == NULL)
		return (0);

	s->str = strdup(str);
	s->len = i;
	s->next = NULL;

	if (*head == NULL)
		*head = s;
	else
	{
		j = *head;
		while (j->next != NULL)
			j = j->next;
		j->next = s;
	}
	return (s);
}
