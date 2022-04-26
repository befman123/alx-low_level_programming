#include "main.h"
/*
 *Set string
 */void set_string(char **s, char *to)
{
	*s = to;
	s = s + 1 - 1;
}
