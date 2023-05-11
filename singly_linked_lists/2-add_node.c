#include "lists.h"

/**
 * add_node - Adds a new node to the chain.
 * 
 * Return: Pointer to new node.
 * 
 * @head: Head of list chain.
 * @str: Given string to be linked to the new list.
*/

list_t *add_node(list_t **head, const char *str)
{
    list_t *new = malloc(sizeof(list_t));
    
    if (!new)
    {
        free (new);
        return (0);
    }
    if (!head || !str)
        return (NULL);
    
    new->str = strdup(str);
    new->len = strlen(str);
    new->next = *head;
    *head = new;

    return (new);
}
