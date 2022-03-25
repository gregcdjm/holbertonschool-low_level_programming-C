#include "lists.h"

/**
 * free_listint - fonction
 * @head: param
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *freenew;

	while (head)
	{
		freenew = head->next;
		free(head);
		head = freenew;
	}
}
