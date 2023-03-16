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
	int i = 0;
	char *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * i + sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
