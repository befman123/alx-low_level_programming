#include <stdlib.h>
#include "function_pointers.h"
/*
 *Function that searches for integers
 */int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		exit(98);
	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
