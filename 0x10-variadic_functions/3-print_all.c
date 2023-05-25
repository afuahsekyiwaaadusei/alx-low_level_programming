#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - a function that prints anything.
 *@format: a list of types of arguments passed to the function.
 *
 *format is passed as a string
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, count = 0;
	const char *ptr = format;

	va_start(args, format);
	while (ptr[count] != '\0')
		count++;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == 'c' && i < count - 1)
			printf("%c, ", va_arg(args, int));
		else if (ptr[i] == 'c' && i == count - 1)
			printf("%c", va_arg(args, int));
		else if (ptr[i] == 'i' && i < count - 1)
			printf("%d, ", va_arg(args, int));
		else if (ptr[i] == 'i' && i == count - 1)
			printf("%d", va_arg(args, int));
		else if (ptr[i] == 'f' && i < count - 1)
			printf("%f, ", va_arg(args, double));
		else if (ptr[i] == 'f' && i == count - 1)
			printf("%f", va_arg(args, double));
		else if (ptr[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else if (i < count - 1)
				printf("%s, ", str);
			else if (i == count - 1)
				printf("%s", str);
		}
		i++;
	}
	printf("\n");
}
