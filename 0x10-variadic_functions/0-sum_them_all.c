#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all it's parameters.
 *@n: count of parameters passed tothe function.
 *
 *If n == 0, return 0.
 *Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	return (sum);
}
