#include "main.h"
#include <stdlib.h>
/*
 *Allocates an array of nmemb long of size sizw
 */void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	a = malloc(nmemb * size);
	if (nmemb == 0 || size == 0 || a == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		*(a + i) = 0;
		i++;
	}
	return (a);
}
