#include "main.h"
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
 *Print a string in reverse
 */void print_rev(char *S)
{
	int len;

	len = _strlen(S) - 1;

	while (len >= 0)
	{
		_putchar(*(S + len));
		len--;
	}
	_putchar('\n');
}
