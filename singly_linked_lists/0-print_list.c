#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of a list
 *
 * @h: pointer to list
 * Return: Number of characters printed
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *ptr = h;

while (ptr != NULL)
{
printf("d\n", ptr->str);
ptr = ptr->next;
count++;
}

return (count);
}
