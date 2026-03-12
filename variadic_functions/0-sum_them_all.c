#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all params
 * @n: number of parameters
 * Return: sum of all params
 */

int sum_them_all(const unsigned int n, ...)
{
int i;
int sum = 0;

if (n == 0)
return (0);

va_list nums;
va_start(nums, n);

for (i = 0; i < n; i++)
{
sum += va_arg(nums, int);
}

va_end(nums);

return (sum);
}
