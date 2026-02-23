#include "main.h"
#include <stddef.h>

/**
* _strpbrk -  finds first occurrence in the 's' of any of the bytes in 'accept'
* @s: string
* @accept: string to be searched
*
* Return: pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
/* for each char in s, check if it's in accept */
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}

/* if reach end of accept, break out of loop */
if (accept[j] == '\0')
break;
}

return (count);
}
