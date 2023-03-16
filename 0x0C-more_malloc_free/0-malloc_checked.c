#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
		exit(98);
	}
	else
	{
		return (p);
	}
}
