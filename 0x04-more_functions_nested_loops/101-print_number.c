#include "main.h"
/*
 *Prints integers using _putchar
 */void print_number(int n)
{
	do {
		int print = n % 10;

		_putchar(print + '0');
		n /= 10;
		if (n == 0)
			_putchar(n + '0');
	} while (n != 0);
	_putchar('\n');
}
