#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: count of arguements passed to main from the command line.
 *@argv: a one-dimensional array of strings. Each string is one of
 *the arguments that was passed to the program.
 *
 *a program that prints the number of arguments passed into it.
 *The program should print a number, followed by a new line
 *Return: zero on success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int sum = 0;
	int count = 1;

	while (count < argc)
	{
		sum++;
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
