#include "lists.h"
/**
 * print_dlistint - function that prints all the elements
 * @h: header
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (node);
}
