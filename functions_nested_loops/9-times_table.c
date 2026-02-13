#include "main.h"
/**
* times_table - print 9 times table, starting with 0
*/
void times_table(void)
{
int i, j, product;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;

if (product > 9)
{
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else if (product < 10 && j !=0)
{
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(product + '0');
}

if (j == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
_putchar(' ');
}
}
}
}
