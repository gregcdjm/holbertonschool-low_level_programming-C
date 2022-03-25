#include "main.h"

/**
* flip_bits - fonction
* @n: param
* @m: param
* Return: unsigned int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
