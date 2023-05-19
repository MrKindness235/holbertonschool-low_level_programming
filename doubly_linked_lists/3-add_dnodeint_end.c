#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *buffer = *head;

	if (!head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head) /* if no nodes, new is head */
	{
		*head = new;
		return (new);
	}

	while (buffer->next != NULL)
		buffer = buffer->next;

	new->prev = buffer->prev;
	buffer->next = new;

	return (new);
}
