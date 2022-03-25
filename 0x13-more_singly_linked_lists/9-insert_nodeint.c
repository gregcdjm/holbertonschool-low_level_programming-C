#include "lists.h"

/**
 * insert_nodeint_at_index - fonction
 * @head: param
 * @idx: param
 * @n: param
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *count;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	count = *head;
	new->n = n;

	if (idx == 0)
	{
		new->next = count;
		*head = new;
	}
	else
	{
		for (i = 1; i < idx; i++)
		{
			if (count == NULL)
				return (NULL);
			count = count->next;
		}
		new->next = count->next;
		count->next = new;
	}
	return (new);
}
