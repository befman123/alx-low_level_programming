#include "main.h"
/**
 * main - entry point
 * @argc: the number of arguments passed
 * @argv: an array of strings containing all args
 *
 * Return: Program name
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		for (i = 0; i < _strlen_recursion(argv[0]); i++)
			_putchar(*(argv[0] + i));
	return (0);
}
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the  string to be counted
 *
 * Return: The number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
