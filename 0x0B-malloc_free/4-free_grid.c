#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a two dim array
 * @height: it is necesary a dim
 * @grid: a pointer to pointer of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
