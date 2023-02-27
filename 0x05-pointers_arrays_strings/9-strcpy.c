#include "main.h"

/**
 * _strcpy - function copies string pointed to by src
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int srcstrlen, i;

	srcstrlen = 0;
	while (src[srcstrlen++]);
	
	for (i = 0; i <= srcstrlen++; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
