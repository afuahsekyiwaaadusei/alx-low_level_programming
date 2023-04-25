#include "main.h"

/**
 *main - entry point
 *
 *Return: Zero if successfull
 */

int main(void)
{
	char word[] = "_putchar";

	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
