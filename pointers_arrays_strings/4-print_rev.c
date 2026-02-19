#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;

/* cycle through string */
while (s[i] != '\0')
{
i++;
}

/* pointer starts at end of string */
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}

