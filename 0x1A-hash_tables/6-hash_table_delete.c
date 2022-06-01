#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash tab
 * @ht: tab to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hd, *tmp;
	unsigned long int x = 0;

	if (ht)
	{
		for (; x < ht->size; x++)
		{
			hd = ht->array[x];
			while (hd)
			{
				tmp = hd;
				hd = hd->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
