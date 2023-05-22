#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *target;

	while (head)
	{
		target = head;
		head = head->next;
		free(target);
	}
}
