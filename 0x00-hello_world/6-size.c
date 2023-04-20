#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Zero when successfull
 */

int main(void)
{
	printf("Size of a char: %d\(s\)", sizeof(char));
	printf("Size of an int : %d\(s\)", sizeof(int));
	printf("Size of a long int: %d\(s\)", sizeof(long int));
	printf("Size of a long long int: %d\(s\)", sizeof(long long int));
	printf("Size of a float: %d\(s\)", sizeof(float));

	return (0);
}
