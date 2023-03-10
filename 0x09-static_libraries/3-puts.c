#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * Return: void
 * @str: input string
 */

void _puts(char *str)
{
	int iterator = 0;

	while (str[iterator])
	{
		_putchar(str[iterator]);
		iterator++;
	}
	_putchar('\n');
}
