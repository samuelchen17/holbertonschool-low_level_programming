#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all params
 * @n: number of parameters
 * Return: sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list nums;

if (n == 0)
return (0);

va_start(nums, n);
sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(nums, int);
}

va_end(nums);

return (sum);
}
