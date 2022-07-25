#include "main.h"
#include <stdlib.h>
/*
 *Frees a two dimensional array
 */void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		exit (89);
	for (i = 0; i < height; i++)
		free(*(grid + i));
}
