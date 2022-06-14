#include "main.h"

/*
 *Checks if input is a digit or not
 */int _isdigit(char a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}
/*
 *Returns the length of a character array
 */int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
		i++;

	return (i);
}
/*
 * compute 10 raised to n
 */int ten_raised_to(int n)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (n == 0)
	{
		return (1);
	}
	while (i < n)
	{
		result *= 10;
		i++;
	}

	return (result);
}
/*
 *Convert string to integer
 */int _atoi(char *s)
{
	int start_index;
	int end_index;
	int i;
	int number;

	i = 0;
	number = 0;
	start_index = -1;
	end_index = 0;
	while (*(s + i) != '\0')
	{
		if (start_index == -1 && _isdigit(*(s + i)))
		{
			start_index = i;
			i++;
		}
		else if (start_index != -1 && _isdigit(*(s + i)))
		{
			end_index = i;
			i++;
		}
		else if (start_index != -1 && _isdigit(*(s + i)) == 0)
		{
			end_index = i - 1;
			break;
		}
		else
		{
			i++;
		}
	}
	if (start_index != -1 && end_index < _strlen(s))
	{
		int j;

		j = (end_index - start_index);
		for (i = start_index; i <= end_index && j > -1; i++, j--)
		{
			number += (int)(*(s + i) - 48) * ten_raised_to(j);
		}
		if (*(s + start_index - 1) > -1 && *(s + start_index - 1) == 45)
		{
			number *= -1;
		}
	}
	return (number);
}
