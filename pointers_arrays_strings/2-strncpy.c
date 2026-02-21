#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: max bytes to copy from src
*
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

/* copy src to end of dest */
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

/* add null byte at end */
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
