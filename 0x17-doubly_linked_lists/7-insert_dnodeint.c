#include "lists.h"
/**
 * dlistint_len - fonction that count the size of the Dlist
 * @h: List to count
 * Return: Number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	while (h)
	{
		h = h->prev;
	}
	return (i);
}

/**
 * *insert_dnodeint_at_index - fonction that return a node at index
 * @head: List
 * Return: add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *nouv/*, *tmp2*/;
	size_t ok;

	ok = dlistint_len(*h);
	if (ok < idx)
		return (NULL);
        else if(*h == NULL || idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	else if(ok == idx)
       	{
		return (add_dnodeint_end(h, n));
	}
	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
	}
	nouv = malloc(sizeof(dlistint_t));
	if (nouv == NULL)
		return (NULL);
	else if (!tmp->next)
		nouv = add_dnodeint_end(h, n);
	else
		nouv = add_dnodeint(h, n);
	while(tmp->prev->prev)
	{
		tmp = tmp->prev;
		ok = nouv->n;
		nouv->n = nouv->next->n;
		nouv->next->n = ok;
		nouv = nouv->next;
	}
	return (*h);
}
	/*tmp2 = tmp->next;
	tmp->next = nouv;
	nouv->prev = tmp;
	nouv->next = tmp2;
	tmp2->prev = nouv;*/
