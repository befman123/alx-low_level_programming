#include "main.h"
/*
 *Compute x raised to y
 */int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/*
 *Print the natural square root of a number
 */int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ()
