#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == NULL)
	{
		_putchar(10);
	} else
	{
		int i = 0;
	
		while (s)
		{
			i++;
		}
		_putchar(s[i - 1]);
		s[i - 1] = NULL;
		_print_rev_recursion(s);

	}
}
