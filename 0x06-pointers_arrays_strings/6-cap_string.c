#include "main.h"

/*
 *Checks if input is a digit or not
 */int _islower(char a)
{
	if (a >= 97 && a <= 122)
		return (1);
	else
		return (0);
}
/*
 *Capitalize specific characters
 */char *cap_string(char *s)
{
	char *checklist;
	int i;
	int j;

	checklist = " , \t, \n, ,, ;, ., !, ?, '\"', '(', ')', '{', '}'";
	i = 0;
	while (*(s + i) != 0)
	{
		if (i == 0 && _islower(*(s + 0)))
			*(s + 0) -= 32;
		else
		{
			j = 0;
			while (*(checklist + j) != 0)
			{
				if (*(s + i - 1) == *(checklist + j) &&
				    _islower(*(s + i)))
					*(s + i) -= 32;
				j++;
			}
		}
		i++;
	}

	return (s);
}
