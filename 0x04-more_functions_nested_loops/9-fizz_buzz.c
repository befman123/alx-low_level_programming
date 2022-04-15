#include <stdio.h>
/*
 *fizz buzz if they ask me this on ajob interview
 *they should pay me more for wasting my time
 */void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int fizz = i % 3;
		int buzz = i % 5;

		if (fizz == 0 && buzz == 0)
			printf("FizzBuzz ");
		else if (buzz == 0)
			printf("Buzz ");
		else if (fizz == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
}
