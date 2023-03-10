#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments themselves
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (*argv[i] > '0' && *argv[i] < '9')
			{
				i++;
				sum += atoi(argv[i]);
			}
			else
			{
				puts("Error");
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
