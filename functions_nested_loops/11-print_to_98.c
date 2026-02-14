#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print numbers from n to 98
* @n: int number
*/

void print_to_98(int n)
{
int x;
int i;

x = 98;

if (i <= x)
{
for (i = n; i <= x; i++)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
else
{
for (i = n; i >= x; i--)
{
if (i != n)
{
printf(", ");
}
printf("%d", i);
}
}
printf("\n");
}
