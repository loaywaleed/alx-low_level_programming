#include "calc.h"
#include <stdio.h>

/**
 * op_add - adds two args
 * op_sub - subtracts a and b args
 * op_mul - multiplies a and b
 * op_div - divides a by b
 * op_mod - remainder of division of a by b
 * @a: first number
 * @b: second number
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
