#include "main.h"
#include <stdio.h>

/**
* fizz_buzz - print 1-100, x3 print Fizz, x5 print Buzz
* x3 and x5 print FizzBuzz
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}

printf("\n");
return (0);
}
