#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check the digit
 *
 * @c: character to be checked.
 *
 * Return: return 1 for digits or  0 for anything else.
 */
int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	return (0);
}
