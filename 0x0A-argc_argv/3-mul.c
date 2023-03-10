#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments themselves
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 3)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{

		puts("Error");
	}
	return (0);
}
