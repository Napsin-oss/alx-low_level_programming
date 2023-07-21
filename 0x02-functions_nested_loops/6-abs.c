#include "main.h"

/**
 * _abs - finds the absolute value of a number
 * @c:  number to be computed
 * Return: absolute value of the number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}