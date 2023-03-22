#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of the array
 * @array: array to execute functions on
 * @size: size of array
 * @action: pointer to function that takes in array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (action)
		{
			action(array[i]);
		}
	}
}
