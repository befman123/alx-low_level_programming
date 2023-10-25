#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: The string to print
 * Return: when null byte is encountered
 */
void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		return;
	}
	_putchar(*(s));
	s = s + 1;
	_puts_recursion(s);
}
