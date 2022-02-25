#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its name
 * @argc: numbers of argu
 * @argv: argu string
 * Return: succes 0
 */
int main(int argc, char **argv)
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multi = atoi(argv[1]);
	multi *= atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
