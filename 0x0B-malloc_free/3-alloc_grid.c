#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to two dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **w, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	w = malloc(sizeof(int *) * height);
	if (w == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		w[i] = malloc(sizeof(int) * width);
		if (w[i] == NULL)
		{
			while (i >= 0)
			{
				free(w[i]);
			}
			free(w);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			w[i][j] = 0;
		}
	}
	return (w);
}
