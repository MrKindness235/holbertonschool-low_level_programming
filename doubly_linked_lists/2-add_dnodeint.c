#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the chain.
 *
 * Return: Pointer to new node.
 *
 * @head: Head of list chain.
 * @n: Data inside the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	if (!head)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
