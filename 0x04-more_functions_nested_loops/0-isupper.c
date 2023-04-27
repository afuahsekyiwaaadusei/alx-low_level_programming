#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: character to be checked
 *
 *Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65)
	{
		_putchar(c);
		_putchar(':');
		_putchar(32);
		_putchar(49);
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(32);
		_putchar(48);
		return (0);
	}
}
