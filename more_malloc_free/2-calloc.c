#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an arr, using malloc
 * @nmemb: number of elements in arr
 * @size: size of each element in arr
 *
 * Return: pointer to allocated memory, return null if fail or if args are 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
char *ptr;
unsigned int i, total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;

arr = malloc(total_size);
if (!arr)
return (NULL);

ptr = arr;

for (i = 0; i < total_size; i++)
ptr[i] = 0;

return (arr);
}
