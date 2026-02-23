#include "main.h"
#include <stddef.h>

/**
* _strspn - counts num of char in the beginning of s that are in accept
* @s: string
* @accept: string to be searched
*
* Return: number of bytes in the beginning of s that are in accept
*/

int _strspn(char *s, char *accept)
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
