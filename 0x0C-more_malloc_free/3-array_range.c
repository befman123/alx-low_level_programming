#include "main.h"
/**
 * array_range -  a function that creates an array of integers
 * @min: minimum
 * @max: the maximum
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;
	return (arr);
}
