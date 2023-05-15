#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new = malloc(sizeof(list_t));
    list_t *buffer = *head;

if (!new)
{
free(new);
return(0);
}
if (!head || !str)
return (NULL);
    
    new->str = strdup(str);
    new->len = strlen(str);
    new->next = NULL;

if (head == NULL) /* if no nodes, newnode is head */
	{
		*head = new;
		return (new);
	}

    while (buffer->next != NULL)
		buffer = buffer->next;

	buffer->next = new;

    
    return(new);
}