#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * It does stuffim in a hurry
 */void positive_or_negative(int i)
{
	int n;

	n = i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
}
