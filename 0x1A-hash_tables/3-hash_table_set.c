#include "hash_tables.h"
/**
 * hash_table_set - adds data to ht
 * @value: value of key.
 * @ht: tab ht
 * @key: data
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *ent, *tmp;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

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
	ent = malloc(sizeof(hash_node_t));
	if (ent == NULL)
		return (0);
	ent->key = strdup(key);
	if (ent->key == NULL)
	{
		free(ent);
		return (0);
	}
	ent->value = strdup(value);
	if (ent->value == NULL)
	{
		free(ent);
		free(ent->key);
		return (0);
	}
	ent->next = ht->array[idx];
	ht->array[idx] = ent;
	return (1);
}
