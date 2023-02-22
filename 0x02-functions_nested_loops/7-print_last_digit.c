#include "main.h"
/**
 * print_last_digit - main entry point
 * Return: returns the value of last digit
 * @n: input number
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
