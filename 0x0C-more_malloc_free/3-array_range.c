#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * Return: return pointer to array
 * @min: starting num
 * @max: ending num
 */

int *array_range(int min, int max)
{
	int i = min, j = 0;
	char *p;

	if (min > max)
	{
		return (NULL);
	}
	while (i < max)
	{
		i++;
	}
	p = malloc(sizeof(int) * i + sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = min;
		min++;
	}
	return (p);
}
