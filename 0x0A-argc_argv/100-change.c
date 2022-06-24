#include <stdio.h>
#include <stdlib.h>
/*
 *Print change for money
 */int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		int sum;
		int div;
		int arg;

		sum = 0;
		div = 0;
		arg = atoi(argv[1]);

		do {
			if (arg == 1)
			{
				sum += (arg / 1);
				div = 1;
			}
			else if (arg >= 2 && arg < 5)
			{
				sum += (arg / 2);
				div = 2;
			}
			else if (arg >= 5 && arg < 10)
			{
				sum += (arg / 5);
				div = 5;
			}
			else if (arg >= 10 && arg < 25)
			{
				sum += (arg / 10);
				div = 10;
			}
			else
			{
				sum += (arg / 25);
				div = 25;
			}
		} while ((arg = arg % div));
		printf("%d\n", sum);
	}
	return (0);
}
