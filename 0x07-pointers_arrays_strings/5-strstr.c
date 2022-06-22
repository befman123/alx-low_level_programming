#include "main.h"
#include <stddef.h>
/*
 *Returns the length of a character array
 */int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	        i++;

	return (i);
}
/*
 *find needle in haystack
 */char *_strstr(char *haystack, char *needle)
{
	int i;
	int diff;

	diff = _strlen(haystack) - _strlen(needle);
	if (diff < 0 || haystack == NULL || needle == NULL)
		return (NULL);
	if (_strlen(needle) == 0)
		return (haystack);
	for (i = 0; i < diff + 1; i++)
	{
		int j;

		for (j = 0; j < _strlen(needle); j++)
		{
			if (*(needle + j) == *(haystack + i + j))
			{
				if (j == _strlen(needle) - 1)
					return (haystack + i);
			}
			else
				break;
		}
	}
	return (NULL);
}
