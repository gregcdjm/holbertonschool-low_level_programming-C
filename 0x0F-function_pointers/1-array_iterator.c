#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: j
 * @action: l
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
