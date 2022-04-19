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
 */void puts_half(char *str)
{
	int i;

	i = (_strlen(str) - 1) / 2;
	while (i < _strlen(str) - 1)
	{
		i++;
		_putchar(*(str + i));
	}
	_putchar('\n');
}
