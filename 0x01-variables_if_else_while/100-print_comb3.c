#include <stdio.h>
/*
 *Prints numbers in unique combinations of two
 */int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
		for (j = 48; j < 58; j++)
		{
			if (i == j)
				continue;
			if (j >= i)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');

	return (0);
}
