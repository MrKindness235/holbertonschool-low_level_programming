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

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head) /* if new isn't first node,
				we need to make the previous head to point to new!*/
	{
		(*head)->prev = new; /*now, head is pointing towards new,
							 who in turn is pointing towards head!*/
	}
	*head = new; /*And, finally, we switch places creating a link.
				Do not break it Oppenheimer!*/
	return (new);
}
