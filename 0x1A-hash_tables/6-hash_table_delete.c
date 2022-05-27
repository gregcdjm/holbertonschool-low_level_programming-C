#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *tmp;
	unsigned long int i = 0;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			head = ht->array[i];

			while (head)
			{
				tmp = head;
				head = head->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
