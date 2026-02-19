#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
int len = 0, i;

while (str[len] != '\0')
len++;

i = (len + 1) / 2;

while (i < len)
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
