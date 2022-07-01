#include "main.h"
#include <stdlib.h>
/*
 *Reallocates a block of memory
 */void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pt;
	unsigned int i;

	p = (char *)malloc(new_size);
	pt = (char *)ptr;
	if (ptr == NULL)
		return (p);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		*(p + i) = *(pt + i);
	}
	return (p);
}
