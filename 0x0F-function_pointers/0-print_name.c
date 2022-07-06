#include "function_pointers.h"
#include <stdlib.h>
 /*
 *Print a name
 */void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
	else
		exit(98);
}
