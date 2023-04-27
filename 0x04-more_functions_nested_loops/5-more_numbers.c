#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14, then a newline
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int num = 0;

		while (num < 15)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
			num++;

		}
		_putchar('\n');
		i++;
	}
}
