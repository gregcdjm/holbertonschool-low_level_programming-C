#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table you want to add or update the key/value to
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;
	char *str = "", *coma = ", ";

	if (ht)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			tmp = ht->array[i];

			while (tmp)
			{
				printf("%s", str);
				printf("'%s': '%s'", tmp->key, tmp->value);
				str = coma;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
