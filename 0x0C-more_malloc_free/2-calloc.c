#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: how many array of arrays needed
 * @size: the size of each array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret;
	unsigned int i;

	if (nmemb != 0 || size != 0)
	{
		ret = malloc(nmemb * size);
		if (ret == NULL)
			return (NULL);
		for (i = 0; i < nmemb * size; i++)
			*(ret + i) = '\0';
		return (ret);
	}
	return (NULL);
}
