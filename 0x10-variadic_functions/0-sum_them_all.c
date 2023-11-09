#include "variadic_functions.h"
/**
 * sum_them_all - summs every number passed to it
 * @n: the number of arguments
 *
 * Return: the sum of all the prameters excluding the one
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int nums, sum;
	unsigned int count;

	count = n;
	sum = 0;
	if (n == 0)
		return (0);
	va_start(args, n);
	while (count--)
	{
		nums = va_arg(args, int);
		sum = sum + nums;
	}
	return (sum);
}
