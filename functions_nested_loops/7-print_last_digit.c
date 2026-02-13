#include "main.h"
#include <stdlib.h>

/**
* _abs - print all single digit numbers of base 10
* @n: int number
* Return: n
*/
int print_last_digit(int n)
{
int last_digit;
last_digit = abs(n) % 10;
_putchar(last_digit + '0');
return (last_digit);
}
