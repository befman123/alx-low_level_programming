#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 *Print last digit of a number and declare it
 *positive negative or zer
 */int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
		       , n, last_digit);
	if (last_digit < 6)
		if (last_digit != 0)
		{
			printf("Last digit of");
			printf(" %d is", n);
			printf(" %d and is less than 6 and not 0\n", last_digit);
		}
	if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);

	return (0);
}
