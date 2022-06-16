#include "main.h"
/*
 *Print integer
 */void print_number(int n)
{
	int div;

	div = 1000000000;
	while (div > 0)
	{
		if (n / div != 0)
		{
			_putchar(48 + (n / div));
			n = n % div;
			div = div / 10;
		}
		_putchar('\n');
	}
}
