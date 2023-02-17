#include <stdio.h>
/**
 * main - entry point of the program
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
