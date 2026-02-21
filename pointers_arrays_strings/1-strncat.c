#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: source string
* @n: max bytes to concatenate from src
*
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

/* find end of dest */
while (dest[i] != '\0')
i++;


/* copy src to end of dest */
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

/* add null byte at end */
dest[i] = '\0';

return (dest);
}
