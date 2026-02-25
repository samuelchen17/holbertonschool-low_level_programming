#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  print sum of the 2 diagonals of a square matrix of integers
* @a: pointer to 2D arr of chars
* @size: size of the square matrix
*/

void print_diagsums(int *a, int size)
{
int row;
int pSum = 0, sSum = 0;

for (row = 0; row < size; row++)
{
pSum += a[row * size + row];
sSum += a[row * size + (size - row - 1)];
}

printf("%d, %d\n", pSum, sSum);
}
