#include "main.h"
/*
 *Print n times table
 */void print_times_table(int n)
{
	int i;
	int j;
	int mul;

	n += 1;
	if (n <= 15 || n > 0)
	{
		for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mul = i * j;
			if (mul < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			if (mul >= 10 && mul < 100)
			{
				int mod = mul % 10;

				int div = mul / 10;

				if (j != 0)
					_putchar(' ');
				_putchar(div + '0');
				_putchar(mod + '0');
			}
			if (mul >= 100 && mul < 1000)
			{
				int mod = mul % 10;
				int div = mul / 10;
				int other_mod;

				other_mod = div % 10;
				div /= 10;
				_putchar(div + '0');
				_putchar(other_mod % 10 + '0');
				_putchar(mod + '0');
			}
			if (j != (n - 1))
			{
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
