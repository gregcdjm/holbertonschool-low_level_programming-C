#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - check if a number is equal to 98
 * @a: the integer to check
 * @b: b
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - check if a number is equal to 98
 * @a: the integer to check
 * @b: b
 * Return: a+b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - check if a number is equal to 98
 * @a: the integer to check
 * @b: b
 * Return: a+b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - check if a number is equal to 98
 * @a: the integer to check
 * @b: b
 * Return: a+b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - check if a number is equal to 98
 * @a: the integer to check
 * @b: b
 * Return: a+b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
