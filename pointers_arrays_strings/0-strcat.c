#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
*
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/* find end of dest */
while (dest[i] != '\0')
i++;


/* copy src to end of dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* add null byte at end */
dest[i] = '\0';

return (dest);
}
