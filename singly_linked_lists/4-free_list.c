#include "lists.h"

void free_list(list_t *head)
{
    list_t *target;

    while (head)
    {
        target = head;
        head = head->next;
        free(target->str);
        free(target);
    }
}
