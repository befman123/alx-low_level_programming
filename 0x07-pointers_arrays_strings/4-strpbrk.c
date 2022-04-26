#include "main.h"
#include <stddef.h>
/*
 *Complicated
 */char *_strpbrk(char *s, char *accept)
{
	short i;
	short j;

	i = 0;
	while (*(s + i) != 0)
	{
		j = 0;
		while (*(accept + j) != 0)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
