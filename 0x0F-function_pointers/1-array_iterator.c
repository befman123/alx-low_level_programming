#include <stdlib.h>
#include "function_pointers.h"
/*
 *executes a function given as a parameter on each element of an array
 */void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (size == 0 || action == NULL || array == NULL)
		exit(98);
	for (i = 0; i < size; i++)
		(*action)(*(array + i));
}
