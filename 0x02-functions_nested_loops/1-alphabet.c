#include "main.h"

/**
 *main -check the code
 *
 *Return: Always  zero
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - printa the alphabets in lowercase
 *
 *
 */

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

