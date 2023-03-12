#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (!(*(s)))
	{
		_putchar(10);
	}
	_print_rev_recursion(s + 1);
	_putchar(*(s));
}
