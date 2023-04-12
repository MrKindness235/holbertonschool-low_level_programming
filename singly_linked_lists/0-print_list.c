#include "lists.h"

/**
 * print_list - Prints values inside given list.
 *
 * Return: zero.
 *
 * @h: Pointer to given list.
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	printf("[%u] ", h->len);
	printf("%s\n", h->str);
	return (0);
}
