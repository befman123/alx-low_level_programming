#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number the factorial will be calculated for
 *
 * Return: the factorial or -1 if number is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
