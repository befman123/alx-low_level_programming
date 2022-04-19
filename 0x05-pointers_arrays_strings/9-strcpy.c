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
 *Copies src string to dest
 */char *_strcpy(char *dest, char* src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		*(dest + i) = *(src + i);
	return (dest);
}
