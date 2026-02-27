#include "main.h"

/**
 * prime_check - helper function to check if a number is prime
 * @n: num
 * @x: divisor to check
 *
 * Return: 1 if prime, else 0
 */

int prime_check(int n, int x)
{
if (x * x > n)
return (1);

if (n % x == 0)
return (0);

return (prime_check(n, x + 2));
}

/**
 * is_prime_number - check of num is prime
 * @n: num
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
/* base cases */
if (n <= 1)
return (0);

if (n == 2)
return (1);

if (n % 2 == 0)
return (0);

return (prime_check(n, 3));
}
