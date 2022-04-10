#include <stdio.h>
/*
 *Print numbers in inique combination of 4
 */int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58 ; i++)
		for (j = 48; j < 58; j++)
			for (k = 48; k < 58; k++)
			{
				if (i == j || i == k ||j == k)
					continue;
				if (i == j && j == k)
					continue;
				if (k > i && j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
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
