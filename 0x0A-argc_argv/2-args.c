#include "main.h"
/**
 * main - the starting point
 * @argc: thenumber of args
 * @argv: an array of args
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc > 0)
		for (i = 0; i < argc; i++)
		{
			for (j = 0; j < _strlen_recursion(argv[i]); j++)
				_putchar(*(argv[i] + j));
			_putchar('\n');
		}
	return (0);
}
#include "main.h"
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
