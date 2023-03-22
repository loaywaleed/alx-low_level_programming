#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two args
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting two numbers
 * @a: first num
 * @b: second number
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying two numbers
 * @a: first num
 * @b: second num
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of a by b
 * @a: first num
 * @b: second num
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
