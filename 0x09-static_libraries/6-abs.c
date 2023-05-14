#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: integer to be computed
 *
 *Return: the absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
}
