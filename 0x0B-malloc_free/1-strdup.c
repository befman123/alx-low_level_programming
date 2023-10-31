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
/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 *            memory, which contains a copy of the string given as a parameter.
 * @str: the string given as a parameter
 *
 * Return: The coppied string or NUll if it fails
 */
char *_strdup(char *str)
{
	char *new_str;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = _strlen_recursion(str);
	new_str = malloc(len + 1);
	if (new_str != NULL)
	{
		for (i = 0; i <= len; i++)
			*(new_str + i) = *(str + i);
		*(new_str + len) = '\0';
		return (new_str);
	}
	return (NULL);
}
