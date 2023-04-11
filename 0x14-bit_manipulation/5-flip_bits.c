#include "main.h"

/**
 * flip_bits - bits needed to flip to get to another number;
 * @n: first number
 * @index: second number
 * Return: number of bits
 */

int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num_of_flips;

	for (i = 0; i < sizeof(long int) * 8; i++)
	{
		if (m & 1 != n & 1)
		{
			num_of_flips++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (num_of_flips);
}
