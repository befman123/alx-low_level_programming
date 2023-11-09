#include "variadic_functions.h"
/**
 * print_strings - prints n number of strings
 * @separator: the separator to print between each string
 * @n: the number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int it;
	char *temp;

	va_start(args, n);
	for (it = 0; it < n; it++)
	{
		temp = va_arg(args, char *);
		if (it == n - 1)
			printf("%s\n", temp);
		else
		{
			if (separator == NULL)
				printf("%s", temp);
			else
				printf("%s%s", temp, separator);
		}
	}
}
