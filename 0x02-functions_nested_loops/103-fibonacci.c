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
 * prints the first 50 Fibonacci numbers, starting with 1 and 2, followed
 * by a new line
 */int main(void)
{
	int i;
	int feb;
	int last;

	last = 2;
	feb = 1;
	for (i = 0; i < 50; i++)
	{
		int temp;

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
