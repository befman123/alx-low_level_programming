#include "main.h"
/*
 *Print integers using _putchar
 */void print_number(long n)
{
	short prnt_flag = 0;
	long d = 1000000000000;

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
 * prints the first 50 Fibonacci numbers, starting with 1 and 2, followed
 * by a new line
 */int main(void)
{
	int i;
	long feb;
	long last;

	last = 1;
	feb = 2;
	for (i = 0; i < 50; i++)
	{
		long temp;

		if (i == 0)
		{
			_putchar(49);
			_putchar(',');
			_putchar(' ');
			continue;
		}
		if (i == 1)
		{
			_putchar(50);
			_putchar(',');
			_putchar(' ');
			continue;
		}
		temp = feb;
		feb += last;
		last = temp;
		print_number(feb);
		if (i != 49)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
	return (0);
}
