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
 *Capitalize chars at appropriate spot
 */char *cap_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (i == 0)
			if (_islower(*(s + i)))
				*(s + i) -= 32;
		switch (*(s + i - 1))
		{
		case ' ':
			*(s + i) -= 32;
			break;
		case ',':
			*(s + i) -= 32;
			break;
		case ';':
			*(s + i) -= 32;
			break;
		case '.':
			*(s + i) -= 32;
			break;
		case '!':
			*(s + i) -= 32;
			break;
		case '?':
			*(s + i) -= 32;
			break;
		case '"':
			*(s + i) -= 32;
			break;
		case '(':
			*(s + i) -= 32;
			break;
		case ')':
			*(s + i) -= 32;
			break;
		case '{':
			*(s + i) -= 32;
			break;
		case '}':
			*(s + i) -= 32;
			break;
		default:
			continue;
		}
		i++;
	}

	return (s);
}
