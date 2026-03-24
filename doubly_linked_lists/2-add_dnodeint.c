#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - add node to head
 *
 * @head: ptr to current head
 * @n: int
 * Return: address of new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
int i = 0;
/* allocate memory for new node */
dlistint_t *new_head = malloc(sizeof(dlistint_t));
if (!new_head)
return (NULL);

new_head->prev = NULL;

/* copy n to new head */
new_head->n = n;

/* point to old head */
new_head->next = *head;

if (*head != NULL)
(*head)->prev = new_head;

/* update new head */
*head = new_head;

return (new_head);
}
