#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @height: the height of the array
 * @grid: the two dimensional array to free
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		int i;

		for (i = 0; i < height; i++)
			free(*(grid + i));
		free(grid);
	}
}
