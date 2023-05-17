#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}





/**
 *main - entry point
 *@argc: count of arguements passed to main from the command line.
 *@argv: a one-dimensional array of strings. Each string is one of
 *the arguments that was passed to the program.
 *
 * a program that adds positive numbers.
 *Print the result, followed by a new line
 *If no number is passed to the program, print 0, followed by a new line
 *If one of the number contains
 *symbols that are not digits, print Error,
 *followed by a new line, and return 1
 *You can assume that numbers
 *and the addition of all the numbers can be stored in an int
 *Return: zero on success.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int count = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			sum = sum + atoi(argv[count]);
			count++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
