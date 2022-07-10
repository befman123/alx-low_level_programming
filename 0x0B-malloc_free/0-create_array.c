#include "main.h"
#include <stdlib.h>
/*
 *Creste snd initialize an array
 */char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = NULL;
	if (size > 0)
		a = (char *)malloc(size);
	if (a != NULL)
		for (i = 0; i < size; i++)
		{
			if (i == (size - 1))
				*(a + i) = '\0';
			*(a + i) = c;
		}
	return (a);
}
