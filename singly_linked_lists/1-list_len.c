#include "lists.h"

/**
 * list_len - Prints values inside given linked list.
 *
 * Return: Number of elements in linked list.
 *
 * @h: Pointer to given list.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
