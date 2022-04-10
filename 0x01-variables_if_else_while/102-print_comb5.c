#include <stdio.h>
/*
 *It does some weird stuff
 *dont even look at it, I know i won't
 */int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
		for (j = 48; j < 58; j++)
			for (k = 48; k < 58; k++)
				for (l = 48; l < 58; l++)
				{
					if (i == j && j == k && k == l)
						continue;
					if ((k == i && l > j) || (l == j && k >
								  i))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 &&
						k == 57 && l == 57)
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
