#include "3-calc.h"
#include <stdlib.h>

const op_t ops[] = {
{'+', op_add},
{'-', op_sub},
{'*', op_mul},
{'/', op_div},
{'%', op_mod},
{'\0', NULL}
};

/**
 * get_op_func - selects correct function given the operator
 * @s: operator
 * Return: ptr to correct func else NULL
 */

int (*get_op_func(char *s))(int, int)
{
int i = 0;
while (ops[i].op)
{
if (s && strcmp(s, ops[i].op) == 0)
return (ops[i].f);

i++;
}

return (NULL);
}

if (s && strcmp(s, ops[i].op) == 0)
if (s && s[0] == ops[i].op && s[1] == '\0')