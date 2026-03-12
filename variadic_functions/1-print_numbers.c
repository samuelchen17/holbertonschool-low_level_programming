#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all params
 * @separator: str to separate params
 * @n: num of params
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;

va_start(nums, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(nums);

printf("\n");
}
