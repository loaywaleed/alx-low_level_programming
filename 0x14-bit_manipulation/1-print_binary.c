#include "main.h"

/**
 * print_binary - function that prints numbers in binary
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((1 & n) + '0');
}
