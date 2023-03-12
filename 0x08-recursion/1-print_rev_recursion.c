#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
