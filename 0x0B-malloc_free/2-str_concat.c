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

	len1 = 0, len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	a = malloc(len1 + len2 + 1);
	if (a == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	a[i] = '\0';
	return (a);
}
