#include "main.h"
/**
 * _islower - checks if the number is lowercase
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
