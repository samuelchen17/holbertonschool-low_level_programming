#include <stdio.h>

/**
 * print_all_args - prints all args
 * @argc: num of args
 * @argv: arr of args
 */


void print_all_args(int argc, char *argv[])
{
for (argc = 0; argv[argc] != NULL; argc++)
{
printf("%s\n", argv[argc]);
}
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
print_all_args(argc, argv);
return (0);
}
