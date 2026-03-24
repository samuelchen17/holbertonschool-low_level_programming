#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - return number of nodes
 *
 * @h: ptr to head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
