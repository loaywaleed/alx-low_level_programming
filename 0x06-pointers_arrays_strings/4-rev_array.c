#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	int length_of_array = n - 1;

	for (i = length_of_array; i >= n / 2; i--)
	{
		temp = a[length_of_array - i];
		a[length_of_array - i] = a[i];
		a[i] = temp;
	}
}
