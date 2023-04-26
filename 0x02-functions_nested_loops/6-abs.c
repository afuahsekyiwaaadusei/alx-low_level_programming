#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: integer to be computed
 *
 *Return: zero if successful
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(n);
	}
	else
		_putchar(n);

	return (0);
}
