#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: ptr to the current head ptr
 * @idx: index where new node will be added
 * @n: number to be added
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *tmp = *h, *node;

unsigned int count = 0;

while (tmp != NULL)
{
tmp = tmp->next;
count++;
}

/* if at head */
if (idx == 0)
return (add_dnodeint(h, n));

if (idx == count)
return (add_dnodeint_end(h, n));

/* allocate memory for new node */
node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);

node->n = n;
tmp = *h;
while (tmp != NULL)
{
if (i == idx)
{
node->prev = tmp->prev;
node->next = tmp;
tmp->prev = node;
node->prev->next = node;
return (node);
}
tmp = tmp->next;
i++;
}
free(node);
return (NULL);
}
