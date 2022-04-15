#include "main.h"
/*
 *Print a triangle
 */void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
