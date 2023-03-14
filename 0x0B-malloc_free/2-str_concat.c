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
	int len1, len2, i, j, k;

	while(s1[len])
	{
		len1++;
	}
	while (s2[len])
	{
		len2++;
	}

	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (s1)
	{
		while(i < len1)
		{
			a[i] = s1[i];
			i++;
		}
	}
	j = 0;
	k = 0;
	if (s2)
	{
		while(j < (len1 + len2))
		{
			a[j] = s2[k];
			j++;
			k++;
		}
	}
	a[i] - '\0';
	return (a);
}
