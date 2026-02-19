#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

/* if string is empty, return */
if (s == NULL)
{
return;
}

/* find the length of the string */
while (s[i] != '\0')
i++;

/* set to last index of string */
i--;

while (j < i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
j++;
i--;
}
}
