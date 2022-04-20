#include "main.h"

/*
 *checks if a character is upper case
 */int _islower(char a)
{
	if (a >= 97 && a <= 122)
		return (1);
	else
		return (0);
}
/*
 *Change lower to upper case in a string
 */char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (_islower(*(s + i)))
			*(s + i) += 32;
		i++;
	}

	return (s);
}
