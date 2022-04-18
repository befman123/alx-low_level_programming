#include "main.h"
/*
 *Prints a string
 */void _puts(char *str)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		_putchar(*(s + i));
	}
	_putchar('/n');

	return (i);
}
