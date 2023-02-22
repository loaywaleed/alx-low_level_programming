#include "main.h"
/**
 * times_table - 9 times table
 *  Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			_putchar('0' + result/10);
			_putchar('0' + result%10);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
