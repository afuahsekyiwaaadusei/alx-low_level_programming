#include "3-calc.h"
#include <stdlib.h>

/**
 *get_op_func - selects the correct function to perform
 *the operation asked by the user.
 *@s: - the operator passed as argument to the program.
 *
 *Return: a pointer to the function that corresponds
 *to the operator passed as arguement.
 *the function returned has parameters (int, int) and will itself return an int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;
	char *def;

	while (i < 6)
	{
		def = ops[i].op;
		if (*def == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
