#include "main.h"
#include <stdlib.h>
/*
 *Compute x raised to y
 */int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/*
 *Converts a binary number to an unsigned int
 */unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int ret;

	i = 0;
	ret = 0;
	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (*(b + j) == '1')
			ret += _pow_recursion(2, (i - (j + 1)));
		else if (*(b + j) == '0')
			continue;
		else
			return (0);
	}
	return (ret);
}
