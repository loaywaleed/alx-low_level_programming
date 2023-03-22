#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function that decides how to print it
 */

void print_name(char *name, void (*f)(char *))

{
	f(name);
}
