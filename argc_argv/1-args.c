#include <stdio.h>

/**
 * print_num_of_args - prints num of args
 * @argc: num of args
 * @argv: arr of args
 */


void print_num_of_args(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
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
print_num_of_args(argc, argv);
return (0);
}
