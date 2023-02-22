#include "main.h"
/**
 * isalpha - checks if a number is alphabet
 * Return: 1 if leteer, 0 otherwise
 * @c: argument to be checked
 */

int _isalpha(int c)
{
	return ((c > 97 && c <= 122)||(c > 65 && c <= 90));
}


