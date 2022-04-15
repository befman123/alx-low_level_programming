#include "main.h"
/*
 *print 0-14 10 times
 */void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 14; i++)
		{
			int w;

			if (i > 9)
				w = w % 10;
			if (i > 9)
				_putchar(49);
			_putchar(48 + w);
		}
	}
	_putchar('\n');
}
