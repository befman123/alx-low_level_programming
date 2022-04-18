#include "main.h"
/*
 *Prints a string in reverse
 */void print_rev(char *c)
{
	int i = 0;

	while (*(c + i) != 0)
		i++;

	for (; i >= 0; i--)
	{
		_putchar(*(c + i));
	}
	_putchar('\n');
}
