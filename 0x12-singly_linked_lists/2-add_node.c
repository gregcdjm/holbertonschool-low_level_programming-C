#include "lists.h"
#include <string.h>

/**
 * add_note - print element of structure list
 * @h: what to print (with .str .len)
 * str: new string
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return(0);

	s->str = strdup(str);
	s->len = strlen(str);
	s->next = *head;

	*head = s;
	return (s);
}
