#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free singularly linked list
 *
 * @head: ptr to head
 */

void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}
