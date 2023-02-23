#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Return: void
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j < n)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\');
		_putchar('\n');
		i++;
	}
}
