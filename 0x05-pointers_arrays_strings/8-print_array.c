#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * Return: void
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (!(i + 1) == n)
		{
			printf(", ");
		}
	}
	putchar('\n');

}
