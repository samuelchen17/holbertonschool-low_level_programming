#include <stdio.h>

/**
 * print_args - prints program name, arg[0]
 * @argc: num of args
 * @argv: arr of args
 */


void print_args(int argc, char *argv[])
{
void(argc);
printf("%s\n", argv[0]);
}

/**
 * main - prints name of program
 * @argc: num of args
 * @argv: arr of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
print_args(argc, argv);
return (0);
}
