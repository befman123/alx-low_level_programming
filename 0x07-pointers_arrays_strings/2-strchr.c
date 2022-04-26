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
 *Return a pointer to the first occurrence of char c
 */char *_strchr(char *s, char c)
{
	int i;
	int slen;

	slen = _strlen(s);
	for (i = 0; i < slen; i++)
		if (*(s + i) == c)
			return (s + i);

	return (NULL);
}
