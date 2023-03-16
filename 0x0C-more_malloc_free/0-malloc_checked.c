#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that returns state of allocation
 * @b: integer to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(unsigned int));
	if (p == NULL)
	{
		return (98);
	}
	else
	{
		return (p);
	}
}
