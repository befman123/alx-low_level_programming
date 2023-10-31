#include "main.h"
/**
 * create_array - a function that creates an array of chars
 *                  and initializes it with a specific char
 * @size: the size of the array
 * @c: the character that initializes the array
 *
 * Return: an array of chars or NULL if size is 0 or less
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
	{
		array = malloc(size * sizeof(char));
		if (array != NULL)
		{
			i = 0;
			while (i < size)
			{
				*(array + i) = c;
				i++;
			}
			return (array);
		}
	}
	return (NULL);
}
