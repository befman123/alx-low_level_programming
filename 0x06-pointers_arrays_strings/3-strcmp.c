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
 *Compares two string ecactly like strcmp bash
 */int _strcmp(char *s1, char *s2)
{
	int i;
	int s1len;
	int s2len;
	int retval;

	i = 0;
	retval = 0;
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	if (s1len < s2len)
	{
		int j;

		for (j = 0; j < (s2len - s1len); j++)
			*(s1 + j + s1len) = '\0';
		s1len = sizeof(s1) / 8;
	}
	else if (s2len < s1len)
	{
		int j;

		for (j = 0; j < (s1len - s2len); j++)
			*(s2 + s2len + j) = '\0';
		s2len = sizeof(s2) / 8;
	}
	while (retval == 0 && i < s1len)
	{
		retval += (*(s1 + i) - *(s2 + i));
		i++;
	}

	return (retval);
}
