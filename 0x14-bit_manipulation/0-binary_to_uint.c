#include "main.h"

/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, converted_int = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			converted_int = (converted_int << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (converted_int);
}
