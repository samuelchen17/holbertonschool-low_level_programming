#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array of int
 * @grid: pointer to the 2d array
 * @height: height of the grid
 */

void free_grid(int **grid, int height);
{
int i;

if (!grid)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
