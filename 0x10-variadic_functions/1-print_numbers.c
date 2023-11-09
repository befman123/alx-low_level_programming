#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: the char used as separator
 * @n: the number of arguments passed
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int nums;
	unsigned int i;
	va_list args;

	i = n;
	va_start(args, n);
	while (i--)
	{
		nums = va_arg(args, int);
		if (i == 0)
			printf("%d\n", nums);
		else
		{
			if (separator == NULL)
				printf("%d, ", nums);
			else
				printf("%d%s", nums, separator);
		}
	}
}
