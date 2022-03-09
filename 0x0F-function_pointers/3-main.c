#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: ff
 * Return: a+b
 */
int main(int argc, char *argv[])
{
	int val1, val2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(val1, val2));
	return (0);
}
