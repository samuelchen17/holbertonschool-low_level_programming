#include "main.h"

/**
* print_diagonal - print \ * n times
* @n: int number
*/

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = i - 1; j > 0; j--)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
