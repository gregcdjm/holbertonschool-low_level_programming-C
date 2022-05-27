#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @value: the value associated with the key.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *entry, *tmp;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	entry = malloc(sizeof(hash_node_t));
	if (entry == NULL)
		return (0);
	entry->key = strdup(key);
	if (entry->key == NULL)
	{
		free(entry);
		return (0);
	}
	entry->value = strdup(value);
	if (entry->value == NULL)
	{
		free(entry);
		free(entry->key);
		return (0);
	}
	entry->next = ht->array[index];
	ht->array[index] = entry;
	return (1);
}
