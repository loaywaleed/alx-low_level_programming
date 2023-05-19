#include "lists.h"
/**
 * add_dnodeint - function that adds new node at the beginning
 * @head: head pointer
 * @n: data to be entered
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node =malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}

