#include "main.h"

/**
 * free_grid - frees 2 D grid
 * @grid: pointer to 2 D grid
 * @height: height of the 2 D grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
