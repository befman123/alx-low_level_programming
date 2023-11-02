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

	if (nmemb || size)
	{
		ret = malloc(nmemb * size);
		if (ret == NULL)
			return ((void *) ret);
		for (i = 0; i < nmemb * size; i++)
			*(ret + i) = '\0';
		return ((void *)ret);
	}
	return (NULL);
}
