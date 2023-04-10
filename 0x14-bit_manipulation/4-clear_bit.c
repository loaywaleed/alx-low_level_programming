#include "main.h"

/**
 * clear_bit - setting a bit to 0;
 * @n: pointer to number
 * @index: bit to be set
 * Return: 1 for success, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((index > sizeof(long int) * 8 - 1) || (n == NULL))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
