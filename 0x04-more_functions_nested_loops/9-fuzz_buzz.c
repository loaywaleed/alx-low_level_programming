#include <stdio.h>
#include "main.h"
/**
 * main - entry point 
 * Return: 0 for success, 1 for error
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((!(i % 3)) && (!(i % 5)))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
