#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */

int main(int argc, int **argv)
{
	int result;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') && (argv[2][0] != '-') && (argv[2][0] != '*') && (argv[2][0]) && (argv[2][0] != '%')))
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
	printf("%d\n", v);
	return (0);
}
