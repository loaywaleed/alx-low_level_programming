#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n till 98
 * Return: void
 * @n: natural number to count from
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);

	_putchar('\n');
}
