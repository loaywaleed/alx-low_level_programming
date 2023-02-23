#include "main.h"
/**
 * _isupper - checks uppercase
 * Return: 1 or 0
 * @c: takes in integer
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c + '0' == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
