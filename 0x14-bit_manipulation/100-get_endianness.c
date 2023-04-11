#include "main.h"

/**
 * get_endianness - function that checks endianness
 * Return: 0 for big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
