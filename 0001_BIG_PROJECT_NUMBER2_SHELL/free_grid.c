#include "main.h"

/**
 * free_grid - frees the previous grid
 * @grid: grid
 * @h: height of grid
 */

void free_grid(char **grid)
{
	int index = 0;

	if (!grid)
		return;
	for (; index < 0; index++)
	{
		if (grid[index])
			free(grid[index]);
	}
	if (grid)
		free(grid);
}
