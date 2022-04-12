#include "main.h"
/*
 *Checks if a letter is lower case or not
 *if it is lowercase returns integer 1 else
 *integer 0
 */int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
