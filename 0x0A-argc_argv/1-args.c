#include <stdio.h>
/*
 *Print all the programs attributes
 */int main(int argc, char *argv[])
{
	argv[argc - 1] = argv[argc - 3 + 2];
	printf("%d\n", argc - 1);
	return (0);
}
