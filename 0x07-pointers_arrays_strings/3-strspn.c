#include "main.h"
/*
 *Complicated
 */unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	short i;
	short j;

	i = 0;
	count = 0;
	while (*(accept + i) != 0)
	{
		j = 0;
		while (*(s + j) != ' ')
		{
			if (*(accept + i) == *(s + j))
				count += 1;
			j++;
		}
		i++;
	}

	return (count);
}
