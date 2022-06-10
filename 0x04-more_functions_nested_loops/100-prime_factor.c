#include <stdio.h>
/*
 *Check if a number is prime
 */int check_prime(unsigned long a)
{
	unsigned long i;

	i = 2;
	while(i < a)
	{
		if (a % i == 0)
			return (0);
	}
	return (1);
}
/*
 *program that finds and prints the largest prime factor of the number
 *612852475143, followed by a new line.
 */int main(void)
{
	unsigned long i;
	unsigned long j;

	j = 612852475143;
	i = 1;
	while (i < j)
	{
		if (j % i == 0)
		{
			if (check_prime(j / i))
			{
				printf("%ld\n", j / i);
			}
			else
				j = j / i;
		}
		i++;
	}
	return (0);
}
