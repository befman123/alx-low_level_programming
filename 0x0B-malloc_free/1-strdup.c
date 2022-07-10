#include <stdlib.h>
#include "main.h"
/*
 *Creste a new char array and initialize it with the string in
 *the parameter
 */char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
		i++;
	a = (char *)malloc((i + 1));
	for (j = 0; j <= i && a != NULL; j++)
		*(a + j) = *(str + j);
	return (a);
}
