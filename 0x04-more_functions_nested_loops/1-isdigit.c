#include "main.h"

/*
 *Checks if input is a digit or not
 */int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}
