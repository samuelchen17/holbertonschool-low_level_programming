#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct type - struct type
 *
 * @symbol: The symbol
 * @type: ptr to function that takes a va list and prints based on type
 */
typedef struct type
{
char symbol;
void (*type)(va_list);
} type_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
