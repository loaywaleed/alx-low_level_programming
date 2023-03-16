#include "main.h"
#include <stdlib.h>

/**
 * _calloc - funtion that allocates memory for an array
 * @nmemb: initialized value
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p, i, j;
	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(unsigned int) * size);
	if (p = NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = nmemb;
	}
	return (p);
}
