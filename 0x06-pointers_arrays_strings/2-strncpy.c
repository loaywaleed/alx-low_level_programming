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
	int i;
	char *temp;

	temp = dst;  
	for (i = 0; i < n; i++)
		*dst++ = *src++;
	return (temp);
}
