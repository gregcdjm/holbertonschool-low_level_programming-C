#include "main.h"

/**
* get_bit - fonction
* @n: param
* @index: param
* Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else
		return (n >> index & 1);
}
