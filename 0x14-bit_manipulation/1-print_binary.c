#include "main.h"

/**
 *print_binary - a function that prints the binary representation of a number.
 *@n: integer to be converted.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n != 0)
	{
		if (n & 0x01)
		{
			_putchar('1');
			n >>= 1;
		}
		else 
		{
			_putchar('0');
			n >>= 1;
		}
	}

}
