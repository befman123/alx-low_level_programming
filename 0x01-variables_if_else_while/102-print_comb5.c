#include <stdio.h>
/*
 *testing my algo
 */int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i == j && j == k && k == l)
						continue;
					if (k > 0 && l < k)
						continue;
					if (j > 0 && k < j)
						continue;
					if (i > 0 && j < i)
						continue;
					putchar(48 + i);
					putchar(48 + j);
					putchar(32);
					putchar(48 + k);
					putchar(48 + l);
					putchar(44);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
