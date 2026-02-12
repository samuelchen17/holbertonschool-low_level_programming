#include <stdio.h>
/**
 * main - prints size of various types.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int charSize, intSize, longSize, longlongSize, floatSize;
charSize = sizeof(char);
intSize = sizeof(int);
longSize = sizeof(long);
longlongSize = sizeof(long long);
floatSize = sizeof(float);
printf("Size of a char: %d byte(s)\n", charSize);
printf("Size of an int: %d byte(s)\n", intSize);
printf("Size of a long int: %d byte(s)\n", longSize);
printf("Size of a long long int: %d byte(s)\n", longlongSize);
printf("Size of a float: %d byte(s)\n", floatSize);
return (0);
}
