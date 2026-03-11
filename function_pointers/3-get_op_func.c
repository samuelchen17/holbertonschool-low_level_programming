#include "3-calc.h"
#include <stdlib.h>

pt_t ops[] = {
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


}
