#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
