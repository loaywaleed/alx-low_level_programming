#include "main.h"

/**
 * print_line - prints a straight line
 * Return: void
 * @n: length of the straight line
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
