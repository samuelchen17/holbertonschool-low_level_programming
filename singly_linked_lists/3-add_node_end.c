#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node to tail
 *
 * @head: ptr to head ptr to be added to head
 * @str: value to be added
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *p, *node;

/* malloc memory for node */
node = malloc(sizeof(list_t));
if (!node)
return (NULL);

/* check if string is valid */
if (str == NULL)
return (NULL);

/* set next for node, cpy str and len*/
node->next = NULL;
node->str = strdup(str);
while (str[i] != '\0')
i++;
node->len = i;

/* if no list, return node as head */
if (*head == NULL)
{
*head = node;
return (node);
}

p = *head;
while (p->next != NULL)
p = p->next;

p->next = node;

return (node);
}
