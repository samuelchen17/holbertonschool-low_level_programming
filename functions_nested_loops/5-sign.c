#include "main.h"
/**
* print_sign - prints sign of number
* @n: int number
* Return: 1, 0, -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+, %d\n', n);
return (1);
}
else if (n == 0)
{
_putchar('0, %d\n', n);
return (0);
}
else
{
_putchar('-, %d\n', n);
return (-1);
}
}
