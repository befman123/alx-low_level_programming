#include "main.h"
#include <stddef.h>
/*
 *returns apointer to the first occurrence of
 *the character c
 */char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
