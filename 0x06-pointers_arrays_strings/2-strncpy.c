#include "main.h"
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
 *Concatinates two string
 */char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen;

	srclen = _strlen(src);
	i = 0;
	while (i != n)
	{
		if (i < n)
			*(dest + i) = *(src + i);
		if (i > srclen)
			*(dest + i) = 0;
		i++;
	}

	return (dest);
}
