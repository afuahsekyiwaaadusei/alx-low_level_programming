#include "main.h"

/**
 *print_diagonal - prints a diagonal line to the terminal
 *@n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int j, i;

	j = 0;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		_putchar('\n');
}
