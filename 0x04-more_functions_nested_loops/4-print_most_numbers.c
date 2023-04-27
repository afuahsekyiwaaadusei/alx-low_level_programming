#include "main.h"

/**
 *print_most_numbers - prints 0 to 9 excluding 2 and 4 followed by a new line
 */

void print_most_numbers(void)
{
	char ch = 48;

	while (ch <= 57)
	{
		if (ch == 50 || ch == 52)
		{
			ch++;
		}
		else
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
