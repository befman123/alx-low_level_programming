#include <stdio.h>
/*
 *Adds the diagonal of a square matrix
 */void print_diagsums(int *a, int size)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < (size * size); i += size + 1)
	{
		sum += *(a + i);
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = size - 1; i < (size * (size - 1)) + 1; i += size - 1)
	{
		sum += *(a + i);
	}
	printf("%d\n", sum);
}
