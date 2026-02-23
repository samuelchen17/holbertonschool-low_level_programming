#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a char in string
* @s: string
* @c: char
*
* Return: Returns pointer to the 1st occurrence of the char c in the string s,
* or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
return (&s[i]);

i++;
}

if (s[i] == c)
return (&s[i]);

return (NULL);
}
