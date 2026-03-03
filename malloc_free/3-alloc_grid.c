#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array of int
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2d array, or NULL on failure
 */


int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

/* allocate array of pointers for each row */
grid = malloc(sizeof(int *) * height);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);

for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
