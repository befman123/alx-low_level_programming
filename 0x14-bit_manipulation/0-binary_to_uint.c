#include "main.h"
/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: the binary numbers string
 *
 * Return: un unsigned int rep of the number strings
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int i, j;

	ret = 0;
	if (b == NULL)
		return (0);
	for (i = _strlen(b) - 1, j = 0; i >= 0 && j < _strlen(b) ; i--, j++)
	{
		unsigned int tmp1;

		tmp1 = _to_uint(*(b + i));
		if (tmp1 == 2)
			return (0);
		else if (tmp1 == 0)
			continue;
		else
			ret = ret + (tmp1 * _pow(2, j));
	}
	if (ret > 0)
		return (ret);
	else
		return (0);
}
/**
 * _to_uint - convert char reps to uint
 * @c: the char to be converted
 *
 * Return: The uint or -1
 */
unsigned int _to_uint(char c)
{
	if (c == '0')
		return (0);
	else if (c == '1')
		return (1);
	else
		return (2);
}
/**
 * _strlen - returns the lenght of a string without the end '\0'
 * @str: the string to return length
 *
 * Return: the length of the string or -1 if the string is invalid
 */
int _strlen(const char *str)
{
	unsigned int i;

	if (str)
		for (i = 0; *(str + i) != '\0'; i++)
		{
		}
	return (i);
}
/**
 * _pow - returns the result of x^y
 * @x: the base
 * @y: the exponent
 *
 * Return: the result of x^y or -1 if failed
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int result, i;

	result = 1;
	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}
