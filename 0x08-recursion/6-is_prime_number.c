#include "main.h"
/*
 *Check if a number is prime
 */int _check(int n, int m)
{
	if (n > 0)
	{
		if (m < 2)
			return (1);
		else if ((n % m) != 0)
			_check(n, m - 1);
		else
			return (0);
	}
	else
		return (0);
}
/*
 *Check primalitiy
 */int is_prime_number(int n)
{
	return _check(n, n);
}
