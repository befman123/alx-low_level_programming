#include "main.h"
/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional array of
 *               integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr != NULL)
	{
		int i;

		i = 0;
		while (i < height)
		{
			*(arr + i) = malloc(sizeof(int) * width);
			if (*(arr + i) == NULL)
			{
				int j;

				j = 0;
				while (j < i)
				{
					free(*(arr + j));
					j++;
				}
				free(arr);
				return (NULL);
			}
			i++;
		}
	}
	return (arr);
}
