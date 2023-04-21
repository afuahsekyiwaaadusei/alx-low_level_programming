#include <stdio.h>

/**
 *main -Entry Point
 *
 *Return: Zero when successfull
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e')
		{
			ch++;
		}
		else if (ch == 'q')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}

	putchar('\n');

	return (0);
}
