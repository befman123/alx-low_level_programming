#include <stdio.h>
/*
 *Print numbers 0-9 using for loop
 */int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
