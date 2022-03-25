#include "main.h"

/**
* clear_bit - fonction
* @n: param
* @index: param
* Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
