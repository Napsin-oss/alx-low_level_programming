#include "main.h"

/**
 * _islower - checks if the character is small
 * @c: the character to be checked
 * Return: 1 for lower case, 0 for other than lower case
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
