#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *main - Entry point
 *
 *Return: Zero if successfull
 */

int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, err, strnlen(err, sizeof(err)));

	return (0);
}
