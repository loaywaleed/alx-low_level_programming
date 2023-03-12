#include "main.h"

/**
 * _strlen_recursion - finding length of string using recursion
 * @s: string to find length of
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
	return (0);
	}
}

