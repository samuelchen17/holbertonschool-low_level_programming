#include "main.h"
/**
* _abs - print all single digit numbers of base 10
* @n: int number
* Return: n
*/
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
n = -n;
}
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
