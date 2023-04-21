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
		if (n < 57)
		{
			putchar(n);
			putchar(44);
			putchar(32);
			n++;
		}
		else
		{
			putchar(n);
		}
	}

	putchar('\n');


	return (0);
}
