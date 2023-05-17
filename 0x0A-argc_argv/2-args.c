#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: count of arguements passed to main from the command line.
 *@argv: a one-dimensional array of strings. Each string is one of
 *the arguments that was passed to the program.
 *
 *a program that prints all arguments it receives.
 *All arguments should be printed, including the first one
 *Only print one argument per line, ending with a new line
 *Return: zero on success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
