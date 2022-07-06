#include "function_pointers.h"
 /*
 *Print a name
 */void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
