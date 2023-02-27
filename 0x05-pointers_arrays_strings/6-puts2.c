#include "main.h"

/**
 * puts2 - function that prints every other character
 * Return: void
 * @str: input string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	_putchar('\n');
}
