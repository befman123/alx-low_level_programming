#include "main.h"
/*
 *Print integers using _putchar
 */void print_number(int n)
{
	short prnt_flag = 0;
	int d = 1000000000;

	if (n == 0)
	{
		_putchar(48);
	}
	else
	{
		if (n < 0)
			_putchar(45);
		while (d != 0)
		{
			int div = n / d;

			if (div != 0)
				prnt_flag = 1;
			if (prnt_flag == 1)
			{
				if (n < 0)
				{
					_putchar((n / d) / -1 + '0');
					n %= d;
				}
				else
				{
					_putchar((n / d)  + '0');
					n %= d;
				}
			}
			d /= 10;
		}
	}
}
/*
 *Print array of integers in reverse
 */void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp;

		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
