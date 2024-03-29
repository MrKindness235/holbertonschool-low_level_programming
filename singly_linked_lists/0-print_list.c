#include "lists.h"

/**
 * print_list - Prints values inside given list.
 *
 * Return: Number of nodes.
 *
 * @h: Pointer to given list.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
		printf("[%u] ", h->len);
		printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
