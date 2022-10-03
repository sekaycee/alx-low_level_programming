#include "main.h"

/**
 * alloc_grid - return a pointer to a 2d array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to allocated memory
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(sizeof(int) * width * height);
	if (!grid)
		return (0);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

