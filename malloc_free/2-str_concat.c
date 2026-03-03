#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string, NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
char *arr;
int i;
int len1 = 0, len2 = 0;

/* get length of strings */
if (s1 != NULL)
while (s1[len1] != '\0')
len1++;

if (s2 != NULL)
while (s2[len2] != '\0')
len2++;

/* allocate memory */
arr = malloc(len1 + len2 + 1);
if (arr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
arr[i] = s1[i];

for (i = 0; i < len2; i++)
arr[len1 + i] = s2[i];

arr[len1 + len2] = '\0';

return (arr);
}
