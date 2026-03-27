#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - return sum of all data in list
 *
 * @head: ptr to current head
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum += head->n;
head = head->next;
}


return (sum);
}
