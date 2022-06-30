#include "main.h"
#include <stdlib.h>
/*
 *Allocates memory using malloc
 */void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a != NULL)
		return (a);
	exit(98);
	return (0);
}
