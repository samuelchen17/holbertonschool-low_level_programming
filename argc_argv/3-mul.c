#include <stdio.h>
#include <stdlib.h>

/**
 * mul_args - multiplies two args
 * @argc: num of args
 * @argv: arr of args
 */

int mul_args(int argc, char *argv[])
{
int mul = 0;

if (argc != 3)
{
printf("Error\n");
return (1); 
}

mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
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
return (mul_args(argc, argv));
}
