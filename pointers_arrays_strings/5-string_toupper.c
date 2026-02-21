#include "main.h"

/**
* string_toupper - converts all lower to upper
* @s: string to modify
*
* Return: pointer to string
*/

char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
}
return (s);
}
