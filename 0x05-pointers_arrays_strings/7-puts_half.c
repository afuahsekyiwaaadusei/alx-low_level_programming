#include "main.h"
/**
 *puts_half - prints half of a string followed by a newline
 *@str: pointer to string to be printed
 */

void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
	{
		int half = len / 2;

		while (*(str + half) != '\0')
		{
			_putchar(*(str + half));
			half++;
		}
	}
	else
	{
		int half = (len - 1) / 2;

		half++;

		while (*(str + half) != '\0')
		{
			_putchar(*(str + half));
			half++;
		}
	}
	_putchar('\n');

}
