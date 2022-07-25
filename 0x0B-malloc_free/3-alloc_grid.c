#include "main.h"
#include <stdlib.h>
/*
 *returns a pointer to a two dimensional array
 */int **alloc_grid(int width, int height)
{
	int **ret, *array, j, i;

	if (height <= 0 || width <= 0)
		return (NULL);
	ret = malloc(sizeof(int *) * height);
	if (ret == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		array = (int *)malloc(sizeof(int) * width);
		if (array == NULL)
			return (NULL);
		for (i = 0; i < width; i++)
			*(array + i) = 0;
		*(ret + j) = array;
	}
	return (ret);
}
