#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arr of chars and initializes it with c
 * @size: size of arr
 * @c: char to initialize arr with
 *
 * Return: pointer to array, NULL if size = 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);

/* check malloc success */
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
