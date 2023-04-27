#include "main.h"

/**
 *print_numbers - prints numbers from 0 to 9 followed by a newline
 *
 */
void print_numbers(void)
{
	char ch = 48;

	while (ch >= 57)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
