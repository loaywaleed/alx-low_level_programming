#include "main.h"

/**
 * _strncpy - copies a string
 * Return: char
 * @dest: destination string
 * @src: source string
 * @n: size
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0, srclen = 0;

	while (src[i++])
	{
		srclen++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = srclen; i < n; i++)
	{
		dest[i] = '\0';
	}
	
	return (dest);
}
