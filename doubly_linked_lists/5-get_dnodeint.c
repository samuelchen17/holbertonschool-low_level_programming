#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - return nth node
 *
 * @head: ptr to current head
 * @index: index of nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{
if (index == count)
return (head);

head = head->next;
count++;
}


return (NULL);
}
