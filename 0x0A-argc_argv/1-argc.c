#include <stdio.h>
/*
 *Print all the programs attributes
 */int main(int argc, char *argv[])
{
	argv[argc - 1] = argv[argc + 2 - 3];
	printf("%d\n", argc);
	return (0);
}
