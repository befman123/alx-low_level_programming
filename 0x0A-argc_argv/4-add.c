#include <stdio.h>
#include <stdlib.h>
/*
 *Checks if input is a digit or not
 */int _isdigit(char *a)
{
	if (*a >= 48 && *a <= 57 && *a != '\0')
		return (1 * _isdigit(a + 1));
	if (*a == '\0')
		return (1);
	else
		return (0 * _isdigit(a + 1));
}
/*
 *Adds positive numbers
 */int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
	{
		int i;
		int sum;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i]) != 1)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
