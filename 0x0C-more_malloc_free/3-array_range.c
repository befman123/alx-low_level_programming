#include <stdlib.h>
#include "main.h"
/*
 *Create an array of integers
 */int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = (int *)malloc(((max - min) + 1) * sizeof(int));
	if (a != NULL)
	{
		for (i = 0; min <= max; min++, i++)
			*(a + i) = min;
	}
	return (a);
}
