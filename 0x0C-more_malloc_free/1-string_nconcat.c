#include "main.h"
#include <stdlib.h>
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
 *Conactinates two strings
 */char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i;
	unsigned int j;

	a = malloc(_strlen(s1) + n + 1);
	if (s1 == NULL)
	{
		free(a);
		a = malloc(_strlen(s2) + 1);
		i = 0;
		while (a != NULL && *(s2 + i) != '\0')
		{
			*(a + i) = *(s2 + i);
			i++;
		}
		*(a + i) = '\0';
		return (a);
	}
	else if (s2 == NULL)
	{
		free(a);
		a = malloc(_strlen(s1) + 1);
		i = 0;
		while (a != NULL && *(s1 + i) != '\0')
		{
			*(a + i) = *(s1 + i);
			i++;
		}
		*(a + i) = '\0';
		return (a);
	}
	else if (a != NULL)
	{
		i = 0;
		while (*(s1 + i) != '\0')
		{
			*(a + i) = *(s1 + i);
			i++;
		}
		n += i;
		j = 0;
		while (i < n && *(s2 + j) != '\0')
		{
			*(a + i) = *(s2 + j);
			i++;
			j++;
		}
		*(a + n) = '\0';
		return (a);
	}
	else
		return (NULL);
}
