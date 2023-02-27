#include "main.h"

/**
 * rev_string - reverses a string
 * Return: void
 * @s: input string
 */

void rev_string(char *s)
{
	int iterator = 0;
	int strlen;

	while (s[iterator])
	{
		iterator++;
	}
	while (iterator--)
	{
		temp = s[iterator];
		s[i] = s[iterator - 1];
		s[iterator - 1] = temp;
	}
}
