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
	char *p;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = 0;
	}
	return (p);
}
