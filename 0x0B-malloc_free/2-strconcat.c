#include <stdlib.h>
#include "main.h"
/*
 *calculate string length
 */int _strlen(char *a)
{
	if (a != NULL)
	{
		int i;

		i = 0;
		while (*(a + i) != '\0')
			i++;
		return (i);
	}
	else
		return (0);
}
/*
 *Concatinate two strings
 */char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		a = (char *)malloc(1);
		*(a + 0) = '\0';
		return (a);
	}
	else if (s1 == NULL)
	{
		a = malloc(_strlen(s2) + 1);
		i = 0;
		while (*(s2 + i) != '\0' && a != NULL)
		{
			*(a + i) = *(s2 + i);
			i++;
		}
		*(a + i + 1) = '\0';
		return (a);
	}
	else if (s2 == NULL)
	{
		a = malloc(_strlen(s1) + 1);
		i = 0;
		while (*(s1 + i) != '\0' && a != NULL)
		{
			*(a + i) = *(s1 + i);
			i++;
		}
		*(a + i + 1) = '\0';
		return (a);
	}
	a = (char *)malloc((_strlen(s1) + _strlen(s2) + 1));
	i = 0;
	while (*(s1 + i) != '\0' && a != NULL)
	{
		*(a + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0' && a != NULL)
	{
		*(a + i) = *(s2 + j);
		i++;
		j++;
	}
	*(a + i + 1) = '\0';
	return (a);
}
