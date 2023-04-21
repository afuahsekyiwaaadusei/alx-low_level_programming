#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Zero if successfull
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	n = 97;
	while (n <= 102)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
