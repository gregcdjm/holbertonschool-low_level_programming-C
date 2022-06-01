#include "hash_tables.h"

/**
 * key_index - retreive the key
 * @key: key
 * @size: size tab
 * Return: value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key);

	idx %= size;
	return (idx);
}
