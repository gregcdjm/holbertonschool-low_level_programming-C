#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * @a: A pointer to the twodimensional array representing an 8-lines board
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
