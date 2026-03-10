#include "main.h"

/**
 * print_name - prints a name
 * @name: pointer to the name str
 * @f: pointer to function to be called
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
