#include "main.h"
/*
 *Checks if the character is alphaneumeric
 */int _isalpha(int c)
{
	if ((c >= 97 && c <= 222) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
