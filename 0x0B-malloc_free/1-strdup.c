#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a memory that containts a copy of 
 * string in parameters
 * @str: string to be copied
 * Return: pointer to a string in memory
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int strlen = 0;

	while (strlen != '\0')
	{
		strlen++;
	}

	a = malloc(sizeof(char) * strlen);
	if (str == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < strlen)
	{
		a[i] = str[i];
	}
	return (a);
}
