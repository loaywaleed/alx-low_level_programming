#include "main.h"
/**
 * more_numbers - function that prints numbers from 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	while (i = 0; i < 10; i++)
	{
		while (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0')
		}
		_putchar('\n');
	}
}
