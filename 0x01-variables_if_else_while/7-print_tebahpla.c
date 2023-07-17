#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: prints the lowercase alphabet in reverse.
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
