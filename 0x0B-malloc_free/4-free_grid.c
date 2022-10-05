#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: the 2 dimensional array of integers to be freed
 * @height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
