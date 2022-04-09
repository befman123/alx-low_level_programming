#include <stdio.h>
/*
 *The question is weird
 */int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		else
			putchar(',');
	}
	putchar('\n');

	return (0);
}
