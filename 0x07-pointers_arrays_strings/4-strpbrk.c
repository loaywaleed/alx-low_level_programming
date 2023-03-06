#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * Return: returned string
 * @s: input string
 * @accept: first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
