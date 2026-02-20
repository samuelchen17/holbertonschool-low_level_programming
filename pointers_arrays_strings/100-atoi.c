#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: pointer to string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
int i = 0;
int minus_counter = 0;
int num = 0;
int sign = 1;

while (s[i] != '\0')
{
if (s[i] == '-')
{
minus_counter++;
}
if (s[i] >= '0' && s[i] <= '9')
{
break;
}
i++;
}

/* if no digits, return 0 */
if (s[i] == '\0')
{
return (0);
}

/* determine the sign */
if (minus_counter % 2 == 1)
{
sign = -1;
}

/* combine number */
while (s[i] >= '0' && s[i] <= '9')
{
if (sign == 1)
{
num = num * 10 + (s[i] - '0');
}
else
{
num = num * 10 - (s[i] - '0');
}

i++;
}

return (num *sign);
}
