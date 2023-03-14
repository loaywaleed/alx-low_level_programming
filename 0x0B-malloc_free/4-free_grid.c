#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees two dimensional grid
 * @grid: grid to free
 * @height: height to free
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
