#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: pointer to 1st int
 * @b: pointer to 2nd int
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
