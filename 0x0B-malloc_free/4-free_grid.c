#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid
 *previously created by your alloc_grid function.
 *@grid: address of 2-D grid
 *@height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
