#include "lists.h"

/**
 * delete_nodeint_at_index - fonction
 * @head: param
 * @index: param
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *count, *tmp;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	count = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(count);
		return (1);
	}
	for (; i < index; i++)
	{
		if (count->next == NULL)
			return (-1);
		count = count->next;
	}
	tmp = count->next;
	count->next = tmp->next;
	free(tmp);
	return (1);
}
