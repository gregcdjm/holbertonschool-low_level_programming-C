#include "hash_tables.h"

/**
 * hash_table_get - element hash tab
 * @ht: retreive key/value
 * @key: key retreived
 * Return: 1 or 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
