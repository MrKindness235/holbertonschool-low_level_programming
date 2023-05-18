#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *buffer = *head;

    if (!head || !str)
    {
        return (NULL);
    }

    new = malloc(sizeof(list_t));
    new->str = strdup(str);
    new->len = strlen(str);
    new->next = NULL;

    if (!*head) /* if no nodes, new is head */
	{
		*head = new;
		return (new);
	}

    while (buffer->next != NULL)
		buffer = buffer->next;

    buffer->next = new;
  
    return(new);
}
