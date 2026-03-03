#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dupe a string
 * @str: string to dupe
 *
 * Return: pointer to duped string, NULL if str is NULL or malloc fails
 */

char *_strdup(char *str)
{
int len = 0;
char *arr;
int i;
char *tmp = str;

if (str == NULL)
return (NULL);

while (*tmp != '\0')
{
len++;
tmp++;
}

arr = malloc(len + 1);

/* check malloc success */
if (arr == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
arr[i] = str[i];
}

return (arr);
}
