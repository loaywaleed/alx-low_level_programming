#include "main.h"
/**
 * _puts_recursion - puts function in recursion
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s = '\0')
	{
		_putchar(0);
	}
	_putchar(s[0]);
	_putchar(_puts_recursion(s+1));
}
