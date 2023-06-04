#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *main - performs simple operations
 *@argc: count of arguements passed to the program.
 *@argv: array of pointers to the arguement passed to the program.
 *
 *Return: zero on success
 */

int main(int argc, char* argv[])
{
	int a, b;
	int (*arith)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[3] == '0') && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	arith = get_op_func(argv[2]);

	if (!arith)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", arith(a, b));

	return (0 );
}
