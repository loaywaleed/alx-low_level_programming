#include "main.h"
/**
 * print_sign - prints whether a number is positive or negative
 * Return: 0 if zero, 1 if positive, -1 if negative
 * @n: number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
