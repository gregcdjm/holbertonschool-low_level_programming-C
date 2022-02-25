#include <stdio.h>
/**
 * main - prints its name
 * @argc: numbers of argu
 * @argv: argu string
 * Return: succes 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
