#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all of its parameters
 * @n: first arg
 * Return: Result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list args;
	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
