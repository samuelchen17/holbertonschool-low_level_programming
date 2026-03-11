#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects correct function given the operator
 * @s: operator
 * Return: ptr to correct func else NULL
 */

int (*get_op_func(char *s))(int, int)
{
static const op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{"\0", NULL}
};

int i = 0;
while (ops[i].op)
{
if (s && strcmp(s, ops[i].op) == 0)
return (ops[i].f);

i++;
}

return (NULL);
}
