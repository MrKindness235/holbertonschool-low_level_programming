#include "lists.h"

/**
 * print_dlistint - Prints all the elements of the a dlistint_t list.
 *
 * Return: the number of nodes in list.
 *
 * @h: Given Head pointer.
 */

size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        if (h == NULL)
            return (0);
        else
        {
            printf("%i\n", h->n);
        }
        h = h->next;
        i++;
    }
    return (i);
}
