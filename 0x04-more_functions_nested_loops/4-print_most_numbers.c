#include "main.h"
/*
 *Prints most numbers, between 0-9
 */void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 48 + 2 || i == 48 + 4)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
