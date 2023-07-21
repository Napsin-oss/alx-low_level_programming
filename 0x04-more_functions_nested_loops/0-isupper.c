#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check the lowercase character.
 *
 * @c: character to be checked.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
