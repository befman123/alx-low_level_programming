#include "main.h"
/*
 *Print 9 times table
 */void times_table(void)
{
	int i;
	int j;
	int mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
			if (i != 9 && j != 9)
			{
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
