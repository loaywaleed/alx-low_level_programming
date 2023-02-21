#include "main.h"
/*
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	char word[] = "_putchar";

	i = 0;
	while (word[i])
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
