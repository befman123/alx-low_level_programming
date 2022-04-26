#include "main.h"
#include <stddef.h>
/*
 *Returns the length of a character array
 */int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
		i++;

	return (i);
}
/*
 *Check for the full occurrence of a
 * string in another
 */char *_strstr(char *h, char *n)
{
	int i;
	int j;
	int nlen;

	nlen = _strlen(h) - _strlen(n);
	if (nlen > 0)
	{
		for (i = 0; i < nlen + 1; i++)
		{
			j = 0;
			while (*(n + j) == *(h + i + j) && *(n + j) != 0)
			{
				if (j == (_strlen(n) - 1))
					return (h + i);
				j++;
			}
		}
	}

	return (NULL);
}
