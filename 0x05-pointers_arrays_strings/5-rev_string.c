#include "main.h"

/**
 * rev_string - reverses a string
 * Return: void
 * @s: input string
 */

void rev_string(char *s)
{
	int iterator = 0;
	int temp;

	while (s[iterator])
	{
		iterator++;
	}
	while (iterator--)
	{
		temp = s[iterator];
		s[iterator] = s[iterator - 1];
		s[iterator - 1] = temp;
	}
}
