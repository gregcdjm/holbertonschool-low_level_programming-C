#include "hash_tables.h"
/**
 * hash_table_create - create a hash_table
 * @size: array's size
 * Return: tab
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab = NULL;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}
