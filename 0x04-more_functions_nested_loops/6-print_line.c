#include "main.h"

/**
 *print_line - prints a straight line in the terminal
 *@n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	int num = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (num < n)
		{
			_putchar('_');
			num++;
		}
		 _putchar('\n');
	}
}

