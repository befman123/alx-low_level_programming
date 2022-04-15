#include "main.h"
/*
 *print 0-14 10 times
 */void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			int w;

			w = i;
			if (i > 9)
			{
				w = w % 10;
				_putchar(49);
			}
			_putchar(48 + w);
		}
		_putchar('\n');
	}
}
