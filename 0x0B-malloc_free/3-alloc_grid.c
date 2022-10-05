#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 *
 * Return: NULL, if width || height == 0 || negative
 * or if function fails
 * otherwise, return a pointer to a 2-dimentional array of integer
 */
int **alloc_grid(int width, int height)
{
	int **grid2;
	int h_index;
	int w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid2 = malloc(sizeof(int *) * height));

	if (grid2 == NULL)
		return (NULL);

	for (h_index; h_index < height; h_index++)
	{
		grid2[h_index] = malloc(sizeof(int) * width);

		if (grid2[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(grid2[h_index]);
			free(grid2);
			return (NULL);
		}
	}

	for (h_index; h_index < height; h_index++)
	{
		for (w_index; w_index < width; w_index++)
			grid2[h_index][w_index] = 0;
	}
	return (grid2);
}
