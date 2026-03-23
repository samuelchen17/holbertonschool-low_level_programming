#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts num of nodes in linked list
 *
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
