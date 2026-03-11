#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects correct function given the operator
 * @s: operator
 * Return: ptr to correct func else NULL
 */

int (*get_op_func(char *s))(int, int)
{
if (s == NULL)
return (NULL);

if (*s == '+')
return (op_add);

if (*s == '-')
return (op_sub);

if (*s == '*')
return (op_mul);

if (*s == '/')
return (op_div);

if (*s == '%')
return (op_mod);

return (NULL);
}
