#include <stdio.h>
/*
 *Prints the alphabet in small letter followed
 *by a new line
 */int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
