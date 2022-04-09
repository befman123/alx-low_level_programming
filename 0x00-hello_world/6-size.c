#include<stdio.h>
/*
 *Prints sizes of datatypes
 */int main(void)
{
	long long int a;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
