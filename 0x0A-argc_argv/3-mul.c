#include <stdio.h>
#include <stdlib.h>
/*
 *Prints the multiplication of two numberss
 */int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
