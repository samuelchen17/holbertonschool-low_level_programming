#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * add_args - adds two args
 * @argc: num of args
 * @argv: arr of args
 * Return: 0 if success, 1 if error
 */

int add_args(int argc, char *argv[])
{
int sum = 0;
int i;

/* check if num of args is correct */
if (argc == 1)
{
printf("0\n");
return (0);
}

/* check if args are digits */
int i;
for (i = 0; argv[1][i]; i++)
{
if (!isdigit(argv[1][i]))
{
printf("Error\n");
return (1);
}
}

sum = atoi(argv[1]) + atoi(argv[2]);
printf("%d\n", sum);
return (0);
}

/**
 * main - call function
 * @argc: num of args
 * @argv: arr of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
return (add_args(argc, argv));
}
