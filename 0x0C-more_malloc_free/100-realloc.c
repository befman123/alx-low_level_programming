#include "main.h"
#include <stdlib.h>
/*
 *Reallocates a block of memory
 */void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pt;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
        {
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	p = (char *)malloc(new_size);
	pt = (char *)ptr;
	if (ptr == NULL)
	{
		free(ptr);
		return (p);
	}
	else
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*(p + i) = *(pt + i);
		}
	free(ptr);
	return (p);
}
