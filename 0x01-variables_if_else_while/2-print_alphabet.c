#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
