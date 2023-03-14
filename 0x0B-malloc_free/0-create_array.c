#include "main.h"

/**
 * create_array - function that creates an array of characters and
 * intialized with a specific char
 * @size: size of memory to print
 * @c: initializing character
 * Return: character
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
