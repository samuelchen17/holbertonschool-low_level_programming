#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  print all params
 * @separator: str to separate params
 * @n: num of params
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strs;
char *str;

va_start(strs, n);

for (i = 0; i < n; i++)
{

str = va_arg(strs, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(strs);

printf("\n");
}
