#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times,in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
