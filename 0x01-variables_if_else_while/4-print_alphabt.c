#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: prints the alphabet in lowercase.
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
