#include "main.h"
/**
 *puts_hal - prints half of a string followed by a newline
 *@str: pointer to string to be printed
 *
 *Description: The function should print the second half of the string
 *If the number of characters is odd, the function should print the last
 *n characters of the string, where n = (length_of_the_string - 1) / 2
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
		int half = (len -1) / 2;

		while (*(str + half) != '\0')
		{
			_putchar(*(str + half));
			half++;
		}
	}
	_putchar('\n');

}
