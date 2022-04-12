#include <stdio.h>
#include <stdbool.h>
/*
 *Print unique combinations of 3 of numbers 0-9
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
					bool t1 = k + l > i + j;
					bool t2 = k + l == i + j;
					bool t3 = (i != j) && (k != l);
				        bool t4 = t2 && t3;

					if (i == 48 && j == 48 && k == 48 &&
					    l == 48)
						goto firsttime;
					putchar(',');
					putchar(' ');
				firsttime:
					if (t1 || t4)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
				}
	putchar('\n');

	return (0);
}
