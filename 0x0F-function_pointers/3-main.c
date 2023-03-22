#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 * @argc: number of arguments
 * @argv: cli args
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') && (argv[2][0] != '-')
		&& (argv[2][0] != '*') && (argv[2][0] != '/') &&
		(argv[2][0] != '%')))
	{
		puts("Error");
		exit(99);
	}
	if ((argv[2][0] == '/' || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}
	result = get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
