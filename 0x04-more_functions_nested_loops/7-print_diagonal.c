#include "main.h"
/*
 *Prints diagonals
 */void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar(92);
				if (j > i)
				{
					_putchar('\n');
					break;
				}
				if (j < i)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
