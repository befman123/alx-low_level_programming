#include "main.h"
/**
 * string_nconcat - concatinates two strings with n amount
 *                  of the first string
 * @s1: the first string
 * @s2: the stiring to be coppied n of it
 * @n: the length of the second string to be copied
 *
 * Return: NULL on failure the string on sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_str;
	unsigned int s1_len, i;

	s1_len = (unsigned int)_strlen_recursion(s1);
	if (s1 == NULL && s2 != NULL)
		return(s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else
	{
		n_str = malloc(s1_len + n + 1);
		if (!n_str)
			return (NULL);
		for (i = 0; i < s1_len; i++)
			*(n_str + i) = *(s1 + i);
		for (i = 0; i < n || *(s2 + i) == '\0'; i++)
			*(n_str + i + s1_len) = *(s2 + i);
		*(n_str + s1_len + n) = '\0';
		return (n_str);
	}
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
