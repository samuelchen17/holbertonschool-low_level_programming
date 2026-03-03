#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to new arr, NULL if fail
 */

int *array_range(int min, int max)
{
int *arr;
int i, n = 0;

if (min > max)
return (NULL);

n = max - min + 1;

arr = malloc(sizeof(int) * n);
if (!arr)
return (NULL);

for (i = 0; i < n; i++)
arr[i] = min + i;

return (arr);
}
