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
	if (argc < 2)
		printf("0\n");
	else if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return (0);
}
