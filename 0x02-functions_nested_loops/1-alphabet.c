#include "main.h"

/**
 *main -check the code
 *
 *Return: Always  zero
 */

int main(void)
{
	void print_alphabet(void)
	{
		char ch = 'a';

		while (ch != 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
	}

	return (0);
}
