#include "main.h"

/**
 * puts_half - prints half of a sting
 * Return: void
 * @str: input string
 */

void puts_half(char *str)
{
	int i, strlen, j, starting_point;

	while (str[i])
	{
		strlen++;
	}
	if (strlen % 2 == 0)
	{
		starting_point = strlen / 2;
	}
	else
	{
		starting_point = (strlen - 1) / 2;
	}
	for (j = starting_point; j < strlen; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
