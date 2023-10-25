#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: the string to be printed
 *
 * Return: if the string id empty or all is printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
