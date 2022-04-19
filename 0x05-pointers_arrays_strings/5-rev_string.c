#include "main.h"
#include <stdio.h>
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
 *Ammend in reverse
 */void rev_string(char *c)
{
	int i;
	int j;
	char temp;

	for (i = 0, j = _strlen(c) - 1; i < j; j--, i++)
	{
		if (i == j)
			continue;
		temp = *(c + i);
		*(c + i) = *(c + j);
		*(c + j) = temp;
	}
}
