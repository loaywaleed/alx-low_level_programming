#include "lists.h"
/**
 * add_dnodeint_end - function that adds new node at the end
 * @head: head pointer
 * @n: data to be entered
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, last;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	last = *head;
	for (;last->next;)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = ;ast;

	return (new_node);
}
