#include "main.h"

/**
 * free_grid - free a 2d grid previously created by my
 * alloc_grid function
 * @grid: 2d array of integers
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}

