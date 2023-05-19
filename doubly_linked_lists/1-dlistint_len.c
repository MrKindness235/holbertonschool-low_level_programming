#include "lists.h"

/**
 * dlistint_len - Returns the lenght of a dlistint.
 *
 * Return: The lenght of the list.
 *
 * @h: Head of list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}