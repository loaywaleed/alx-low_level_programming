#include "main.h"

/**
 * _strncat - appending a number of characters
 * Return: char
 * @dest: destination parameter
 * @src: source parameter
 * @n: numbers
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
	}

	return (dest);
}
