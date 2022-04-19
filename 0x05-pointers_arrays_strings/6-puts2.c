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
 *Prints every other character in char#
 */void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str) - 1; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
