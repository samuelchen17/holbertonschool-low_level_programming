#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a doubly linked list
 *
 * @head: ptr to current head
 */

void free_dlistint(dlistint_t *head)
{
/* allocate memory for new node */
dlistint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
