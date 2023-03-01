#include "main.h"

/**
 * string_to_upper - converts string lowercase to uppercase
 * Return: pointer to char
 * @c: string
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' &&  c[i] <= 'z')
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
