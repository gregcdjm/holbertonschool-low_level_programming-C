#include "lists.h"

/**
 * add_nodeint - add nodeint
 * @head: head and n
 * @n: n
 * Return: add
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *e;

	e = malloc(sizeof(listint_t));
	if (e == NULL)
		return (NULL);
	e->n = n;
	e->next = *head;
	*head = e;
	return (e);
}
