#include "main.h"
/**
 * jack_bauer: prints all minutes in day
 * Return: void
 */
void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar('0' + ':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
		}
	}	
}
