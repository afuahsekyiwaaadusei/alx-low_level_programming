#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: count of arguements passed to main from the command line.
 *@argv: a one-dimensional array of strings. Each string is one of
 *the arguments that was passed to the program.
 *
 *a program that multiplies two numbers.
 *Your program should print the result of the multiplication,
 *followed by a new line.
 *You can assume that the two numbers and result of the
 *multiplication
 *can be stored in an integer.
 *If the program does not receive two arguments,
 *your program should print Error,
 *followed by a new line, and return 1
 *Return: zero on success.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{

		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
