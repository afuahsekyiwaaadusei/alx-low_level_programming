#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Zero if successfull
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
