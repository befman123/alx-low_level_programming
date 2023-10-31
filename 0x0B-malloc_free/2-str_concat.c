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
 * str_concat -  a function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The concatinated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	concat = malloc(len1 + len2 + 1);
	if (concat != NULL)
		for (i = 0 ; i < len1 + len2 + 1; i++)
		{
			if (i < len1)
				*(concat + i) = *(s1 + i);
			else if (i == len1)
				continue;
			else
				*(concat + i - 1) = *(s2 + i - (len1 + 1));
		}
	*(concat + len1 + len2 + 1) = '\0';
	return (concat);
}
