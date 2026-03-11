#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple math operations
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on success else error code
 */

int main(int argc, char *argv[])
{
int a, b, (*op_func)(int, int);
char op;

if (argc != 4)
{
printf("Error\n");
return (98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op = argv[2][0];

if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
{
printf("Error\n");
return (99);
}

if ((op == '/' && b == 0) || (op == '%' && b == 0))
{
printf("Error\n");
return (100);
}

op_func = get_op_func(argv[2]);
printf("%d\n", op_func(a, b));

return (0);
}
