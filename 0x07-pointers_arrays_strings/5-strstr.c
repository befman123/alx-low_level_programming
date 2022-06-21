#include "main.h"
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
	int start;
	int diff;

	start = 0;
	diff = _strlen(haystack) - _strlen(needle);
	for (i = 0; i < diff + 1; i++)
	{
		int j;

		j = 0;
		while (*(needle + j) != '\0')
		{
			if (*(needle + j) == *(haystack + i + j))
			{
				j++;
				if (*(needle + j) == '\0')
					return (haystack + i);
			}
			else
				break;
		}
	}
}
