#include "main.h"
/*
 *Prints a string in reverse
 */void print_rev(char *c)
{
	int str_len = _strlen(c);

	for (; str_len >= 0; str_len--)
	{
		_putchar(*(c + str_len));
	}
	_putchar('\n');
}
