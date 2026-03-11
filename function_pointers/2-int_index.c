#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - search for an int in arr
 * @array: ptr to arr
 * @size: size of arr
 * @cmp: ptr to func
 * Return: index of first match else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
