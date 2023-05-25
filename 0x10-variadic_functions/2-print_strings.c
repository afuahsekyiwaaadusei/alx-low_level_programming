#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings -  prints strings, followed by a new line.
 *@separator: the string to be printed between numbers.
 *@n: the number of strings passed to the function.
 *
 *If separator is NULL, don’t print it.
 *If one of the string is NULL, print (nil) instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nill)");
		if ((separator) && (i != n - 1))
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	va_end(args);
	printf("\n");
}
