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
int i = 0;
int j;

while (s[i])
{
j = 0;

while (accept[j])
{
if (s[i] == accept[j])
return (&s[i]);

j++;
}

i++;
}

return (NULL);
}
