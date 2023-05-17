#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: count of arguements passed to the
 *program from the command line.
 *@argv: a one-dimensional array of strings.
 *Each string is one of the arguments that was passed to the program.
 *
 *Return: zero on success.
 */

int main(int argc, char *argv[])
{
	(void)(argc);

	printf("%s\n", argv[0]);

	return (0);
}
