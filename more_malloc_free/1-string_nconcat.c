#include "main.h"
#include <stdlib.h>

/**
 * str_nconcat - concatenates two strings, up to n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: num of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string, NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arr;
unsigned int i = 0;
unsigned int len1 = 0, len2 = 0;

if (s1)
while (s1[len1] != '\0')
len1++;

if (s2)
while (s2[len2] != '\0')
len2++;

if (len2 > n)
len2 = n;

arr = malloc(len1 + len2 + 1);
if (!arr)
return (NULL);

for (i = 0; i < len1; i++)
arr[i] = s1[i];

for (i = 0; i < len2; i++)
arr[len1 + i] = s2[i];

arr[len1 + len2] = '\0';

return (arr);
}
