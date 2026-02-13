#include <stdio.h>
/**
* main - print 0-9, comma and space separated
* Return: 0
*/
int main(void)
{
int n;
n = '0';
while (n <= '9')
{
putchar(n);
if (n!='9')
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
