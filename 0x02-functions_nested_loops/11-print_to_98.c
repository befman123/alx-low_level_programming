#include "main.h"
#include <stdio.h>
/*
 *Print number to 98 from given starting point
 */void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n > 98 ? n-- : n++;
	}
	printf("%d\n", n);
}
