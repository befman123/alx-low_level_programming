#include "main.h"
#include <stdlib.h>
/*
 *Returns the length of a string
 */int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/*
 *Concatinates two strings
 */char *str_concat(char *s1, char *s2)
{
	int lens1, lens2, i;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = _strlen_recursion(s1);
	lens2 = _strlen_recursion(s2);
	ret = (char *)malloc(lens1 + lens2 + 1);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
	{
		*(ret + i) = *(s1 + i);
	}
	for (i = 0; i < lens2 + 1; i++)
	{
		*(ret + i + lens1) = *(s2 + i);
	}
	return (ret);
}
