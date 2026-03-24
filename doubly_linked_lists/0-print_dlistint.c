#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - print all elements of a doubly linked list
 *
 * @h: ptr to head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
const dlistint_t *ptr;
ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;
}

return (count);
}
