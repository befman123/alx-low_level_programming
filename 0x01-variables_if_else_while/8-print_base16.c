#include <stdio.h>
/*
 *Print numbers that are in base 16
 */int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
