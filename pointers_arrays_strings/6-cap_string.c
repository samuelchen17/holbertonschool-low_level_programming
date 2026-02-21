#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: string to modify
*
* Return: pointer to string
*/

char *cap_string(char *s)
{
int i = 0;

/* check first character */
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;

i++;

/* loop to iterate through string */
while (s[i] != '\0')
{
/* check previous character to see if start of word */
if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}

i++;
}

return (s);
}
