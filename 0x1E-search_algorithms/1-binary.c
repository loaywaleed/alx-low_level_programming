#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: sorted array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value found or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0;
	size_t end = size - 1;
	size_t middle;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%i, ", array[i]);

		printf("%i\n", array[end]);
		middle = (start + end) / 2;
		if (array[middle] < value)
			start = middle + 1;
		else if (array[middle] > value)
			end = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
