#include "main.h"
/**
 * _islower - checks if the number is lowercase
 * Return: 1 if lower, 0 if not
 * parameter: takes in a lower case c
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);

}
