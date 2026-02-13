#include <stdio.h>
/**
* main - print alphabet in lowercase, exclude q and e
* Return: 0
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
/* skip q and e */
if (c == 'e' || c == 'q')
{
c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
