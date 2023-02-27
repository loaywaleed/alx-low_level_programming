#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * Return: number
 * @s: pointer to string
 */

int _strlen(char *s)
{
	int iterator = 0;

	while (*s[iterator])
	{
		iterator++;

	}
	return (iterator);
}
