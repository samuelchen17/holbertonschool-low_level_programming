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
int i, j;

/* check if num of args is correct */
if (argc == 1)
{
printf("0\n");
return (0);
}

/* check if args are digits */
for (i = 1; argv[i] != NULL; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
}

/* add all args */
for (argc = 1; argv[argc] != NULL; argc++)
{
sum += atoi(argv[argc]);
}

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
