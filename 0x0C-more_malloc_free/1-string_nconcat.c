#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strigns
 * @s1: first string
 * @s2: second string
 * @n: concat till a certain length of s2
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0; j = 0; k = 0, l = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		l = i + j;
	else
		l = i + n;

	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			p[k] = s1[k];
		}
		else
		{
			p[k] = s2[j];
			j++;
		}
		k++;
	}
	p[k] = '\0';
	return (p);
}
