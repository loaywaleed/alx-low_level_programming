#include "main.h"

/**
 * get_bit - function that reads value of bit
 * @n: number
 * @index: index to read
 * Return: the bit read
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
