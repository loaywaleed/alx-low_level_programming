#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * Return: void
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
