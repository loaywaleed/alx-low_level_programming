#include "main.h"
/**
 * main - starting point of the program
 * print_alphabet - function that prints lowercase letters
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
