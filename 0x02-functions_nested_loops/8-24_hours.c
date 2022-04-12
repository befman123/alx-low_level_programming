#include "main.h"
/*
 *Prints every minute of Jack Bauer's
 *24 hours
 */void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j == 5)
				break;
			for (k = 0; k < 6; k++)
				for (l = 0; l < 10; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(58);
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
		}
}
