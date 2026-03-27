#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: ptr to the current head ptr
 * @index: index where new node will be removed
 * Return: 1 for success, -1 for fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *ptr = *head;
if (*head == NULL)
return (-1);

if (index == 0)
{
if (ptr->next != NULL)
ptr->next->prev = NULL;

*head = ptr->next;
free(ptr);
return (1);
}

while (ptr != NULL)
{
if (i == index)
{
if (ptr->next != NULL)
{
ptr->prev->next = ptr->next;
ptr->next->prev = ptr->prev;
}
else
ptr->prev->next = NULL;

free(ptr);
return (1);
}

i++;
ptr = ptr->next;
}

return (-1);
}
