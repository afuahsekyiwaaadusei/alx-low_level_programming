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
	int i = 0;
	const char *ptr = format;
	char *str;

	va_start(args, format);
	while (ptr[i] != '\0' && ptr[i + 1] != '\0')
	{
		switch(ptr[i])
		{
			case 'c' :
				 printf("%c, ", va_arg(args, int));
				 break;
			case 'i' :
				 printf("%d, ", va_arg(args, int));
				 break;
			case 'f' :
				 printf("%f, ", va_arg(args, double));
				 break;
			case 's' :
				 str = va_arg(args, char *);
				 if (str == NULL)
					  printf("(nil)");
				 else
					 printf("%s, ", str);
				 break;
			default :
				 break;
		}
		i++;
	}
	while (ptr[i] != '\0' && ptr[i + 1] == '\0')
	{
		switch(ptr[i])
		{
			case 'c' :
				printf("%c", va_arg(args, int));
				break;
			case 'i' :
				printf("%d", va_arg(args, int));
				break;
			case 'f' :
				printf("%f", va_arg(args, double));
				break;
			case 's' :
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default :
				break;
		}
		i++;
	}
	printf("\n");
}
