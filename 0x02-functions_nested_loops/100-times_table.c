#include "main.h"
/*
 *Print n times table
 */void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	n += 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mul = i * j;
			if (mul < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(mul + '0');
			}
			if (mul >= 10 && mul < 100)
			{
				int mod = mul % 10;

				int div = mul / 10;

				_putchar(div + '0');
				_putchar(mod + '0');
			}
			if (mul >= 100 && mul < 1000)
			{
				int mod = mul % 10;
				int div = mul / 10;

				_putchar(div / 10 + '0');
				_putchar(div % 10 + '0');
				_putchar(mod + '0');
			}
			if (j != n)
			{
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
