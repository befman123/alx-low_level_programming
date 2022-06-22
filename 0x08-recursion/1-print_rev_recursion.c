#include "main.h"
/*
 *Print a string in reverse
 */void print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		_putchar(*s);
		return;
	}
}
