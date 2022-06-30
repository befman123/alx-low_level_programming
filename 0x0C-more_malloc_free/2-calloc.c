#include "main.h"
#include <stdlib.h>
/*
 *Allocates an array of nmemb long of size sizw
 */void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	a = malloc(nmemb * size);
	if (nmemb == 0 || size == 0 || a == NULL)
		return (NULL);
	else
		return (a);
}
