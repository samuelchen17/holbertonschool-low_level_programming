#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to head
 *
 * @head: ptr to head ptr to be added to head
 * @str: value to be added
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
int i = 0;
list_t *new_head = malloc(sizeof(list_t));
if (!new_head)
return (NULL);

/* copy the str and length */
new_head->str = strdup(str);

/* copy str length*/
while (str[i] != '\0')
i++;
new_head->len = i;

/* point to old head */
new_head->next = *head;
/* update new head */
*head = new_head;

return (new_head);
}
