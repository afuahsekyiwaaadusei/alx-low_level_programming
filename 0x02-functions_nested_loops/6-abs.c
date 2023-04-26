#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: integer to be computed
 *
 *Returns: zero if successful
 */

int _abs(int n)
{
	int tmp;

	if (n < 0)
	{
		tmp = -(n);
		_putchar(tmp);
	}
	else
		_putchar(n);

	return (0);
}
