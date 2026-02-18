#include "main.h"

/**
* print_line - print _ * n times
* @n: int number
*/

void print_line(int n)
{
int i;

if (n <= 0)
{_putchar('\n');
return;
}

for (i = n; i != 0; i--)
{
_putchar('_');
}
_putchar('\n');
}
