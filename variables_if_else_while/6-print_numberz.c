#include <stdio.h>
/**
* main - print 0-9
* Return: 0
*/
int main(void)
{
int n;
n = 0;
while (n <= 9)
{
/* convert to ASCII*/
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
