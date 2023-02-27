#include "main.h"

/**
 * rev_string - reverses a string
 * Return: void
 * @s: input string
 */

void rev_string(char *s)
{
	int strlen, i, middle_value, end_of_string;
	char temp;

	strlen = 0;
	while (s[strlen])
	{
		strlen++;
	}
	middle_value = strlen / 2;
	end_of_string = strlen - 1;
	for (i = 0; i < middle_value; i++)
	{
		temp = s[i];
		s[i] = s[end_of_string];
		s[end_of_string--] = temp;
	}
}
