#include "main.h"
/**
 * _realloc - reallocates memory size
 * @ptr: the memory to re-allocate
 * @old_size: the length of the above memory
 * @new_size: the new size of memory
 *
 * Return: the newly allocated array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ret;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	ret = malloc(new_size);
	for (i = 0; i < new_size; i++)
	{
		if (i < old_size)
		{
			char *temp;
			temp = ptr;
			*(ret + i) = *(temp + i);
		}
	}
	return (ret);
}
