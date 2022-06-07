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
 *computes and prints the sum of all the multiples of 3 or 5 below 1024
 */int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	print_number(sum);
	_putchar('\n');

	return (0);
}
