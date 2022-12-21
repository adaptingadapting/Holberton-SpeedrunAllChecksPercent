#include "main.h"

/**
 * free_grid - frees the previous grid
 * @grid: grid
 * @h: height of grid
 */

void free_grid(int **grid, int h)
{
	for (h -= 1; h >= 0; h--)
	{
		free(grid[h]);
	}
	free(grid);
}
