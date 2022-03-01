#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free array 2dimen
 * @grid: array
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
}
