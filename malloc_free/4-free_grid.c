#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The 2D array to be freed
 * @height: The height (number of rows) of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid.
 * It first frees each row, then frees the array of pointers to rows.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}