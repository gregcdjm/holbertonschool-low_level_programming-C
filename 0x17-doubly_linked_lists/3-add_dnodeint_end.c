#include "lists.h"
/**
 * add_dnodeint_end - fonction that add at end a node
 * @head: List to add
 * @n: int of the new node
 * Return: List
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (head->next)
		head = head->next;

	head->next = new;
	new->prev = head;
	return (new);
}
