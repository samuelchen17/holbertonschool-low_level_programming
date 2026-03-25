#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to tail
 *
 * @head: ptr to current head
 * @n: int
 * Return: address of new head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/* allocate memory for new node */
dlistint_t *node, *ptr;

node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);

/* copy n to new head */
node->n = n;
node->next = NULL;

/* if list empty */
if (*head == NULL)
{
node->prev = NULL;
*head = node;
return (node);
}

/* traverse list */
ptr = *head;
while (ptr->next != NULL)
ptr = ptr->next;

/* point prev tail to new node */
tail->next = node;

/* point to prev tail */
node->prev = tail;

return (node);
}
