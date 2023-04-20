#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Zero when successfull
 */

int main(void)
{
	printf("Size of a char: %d\(s\)\n", sizeof(char));
	printf("Size of an int : %d\(s\)\n", sizeof(int));
	printf("Size of a long int: %d\(s\)\n", sizeof(long int));
	printf("Size of a long long int: %d\(s\)\n", sizeof(long long int));
	printf("Size of a float: %d\(s\)\n", sizeof(float));

	return (0);
}
