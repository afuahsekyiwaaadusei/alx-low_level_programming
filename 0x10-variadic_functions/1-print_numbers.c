#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers -  prints numbers, followed by a new line.
 *@separator: the string to be printed between numbers.
 *@n: the number of integers passed to the function.
 *
 *If separator is NULL, don’t print it.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator && (i != n - 1))
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
