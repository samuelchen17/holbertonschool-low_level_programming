#include "main.h"

/**
 * sqrt_calc - helper function to calc sqrt of n
 *
 * @n: num
 * @x: guess for sqrt of n
 *
 * Return: natural sqrt of n
 * or -1 if no natural sqrt
 */

int sqrt_calc(int n, int x)
{
if (x * x == n)
return (x);

if (x * x > n)
return (-1);

return (sqrt_calc(n, x + 1));
}

/**
 * _sqrt_recursion - return natural square root of n
 *
 * @n: num
 *
 * Return: natural sqrt of n
 * or -1 if no natural sqrt
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqrt_calc(n, 0));
}
