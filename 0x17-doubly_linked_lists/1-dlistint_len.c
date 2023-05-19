#include "lists.h"
/**
 * dlistint_len - function that returns number of nodes
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
