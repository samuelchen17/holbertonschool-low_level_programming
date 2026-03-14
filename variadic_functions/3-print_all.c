#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void (*get_print_func(char c))(va_list);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all -  print all args
 * @format: str to specify arg types
 */

void print_all(const char * const format, ...)
{
int i;
va_list args;
void (*print_func)(va_list);
char *separator = "";

va_start(args, format);

i = 0;

while (format && format[i] != '\0')
{
print_func = get_print_func(format[i]);
if (print_func)
{
printf("%s", separator);
print_func(args);
separator = ", ";
}

i++;
}

va_end(args);

printf("\n");
}

/**
 * get_print_func -  get print func based on type
 * @c: char to specify type
 * Return: ptr to func that prints based on type
 */

void (*get_print_func(char c))(va_list)
{
type_t types[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{0, NULL}
};

int i = 0;

while (types[i].symbol) && c != types[i].symbol)
i++;

return (types[i].f);
}

/**
 * print_char - print all args
 * @args: va list
 */

void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - print all args
 * @args: va list
 */

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - print all args
 * @args: va list
 */

void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - print all args
 * @args: va list
 */

void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}

printf("%s", str);
}
