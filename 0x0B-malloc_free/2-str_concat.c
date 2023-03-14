#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int len1, len2, i, j;

	while(s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}

	a = malloc(len1 + len2 + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	if (s1)
	{
		while(i < len1)
		{
			a[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			a[i] = s2[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';
	return (a);
}
