#include "main.h"

/**
 * print_rev - prints a string in reverse;
 * Return: always 0
 * @s: input string
 */

void print_rev(char *s)
{
	int iterator = 0;

	while (s[iterator])
	{
		iterator++;
	}
	while (iterator--)
	{
		_putchar(s[iterator]);
	}
	_putchar('\n');
}
