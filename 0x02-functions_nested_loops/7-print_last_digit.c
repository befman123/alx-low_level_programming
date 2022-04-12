#include "main.h"

/*
 *Convert the integer to a ascii represetaion
 */int convert(int a)
{
	if (a < 0)
	{
		int b = a * -1;

		return (b + 48);
	}
	else
		return (a + 48);
}

/*
 *Prints the last digit of a number
 */int print_last_digit(int n)
{
	int a;

	if (n >= 0)
	{
		a = n % 10;
		_putchar(convert(a));
	}
	else
	{
		a = n % 10;
		a *= -1;
		_putchar(convert(a));
	}

	return (a);
}
