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
	while (retval == 0 && (i < s1len || i < s2len))
	{
		retval += (*(s1 + i) - *(s2 + i));
		i++;
	}

	return (retval);
}
