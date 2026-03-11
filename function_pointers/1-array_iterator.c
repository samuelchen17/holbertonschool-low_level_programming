#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterate through an arr and exec func on each element
 * @array: pointer to arr
 * @size: size of arr
 * @action: pointer to func to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
int *tmp;

if (array == NULL || action == NULL || size == 0)
return;

tmp = array;

for (i = 0; i < size; i++)
{
action(*tmp);
tmp++;
}
}
