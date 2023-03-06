#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * Return: char
 * @s: input string
 * @b: byte argument
 * @n: number of bytes in memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
