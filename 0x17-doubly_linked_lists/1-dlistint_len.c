#include "lists.h"
/**
 * print_dlistint - function that prints all the elements
 * @h: header
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
