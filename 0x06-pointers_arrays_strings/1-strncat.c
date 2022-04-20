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
 */char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen;

	destlen = _strlen(dest);
	i = 0;
	while (*(src + i) != 0 && i != n)
	{
		*(dest + destlen + i) = *(src + i);
		i++;
	}

	return (dest);
}
