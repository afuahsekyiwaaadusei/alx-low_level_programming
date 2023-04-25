#include "main.h"

/**
 *main -check the code
 *
 *return: always returns zero
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
}
