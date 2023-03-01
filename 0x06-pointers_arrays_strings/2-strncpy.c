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
	int i=, j;

	for (j = 0; j < n; j++)
	{
		if (src[j])
		{
			dest[j] = src[j];
		}
		else
	       	{
			break;
		}
	}
	for (i = 0; dest[i] != 0; i++)
	{
	}
	dest[i] = '\0';
	return (dest);
}
