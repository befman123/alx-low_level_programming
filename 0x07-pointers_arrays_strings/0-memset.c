#include "main.h"
/*
 *Write bytes at a memory location
 */char *_memset(char *a, char b, unsigned int c)
{
	unsigned int i;

	i = 0;
	while (i < c)
	{
		*(a + i) = b;
		i++;
	}

	return (a);
}
