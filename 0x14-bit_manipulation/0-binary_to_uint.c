#include "main.h"

unsigned int mul_by_two(unsigned int i);

/**
 *binary_to_uint -a function that converts a binary number to an unsigned int.
 *@b:is pointing to a string of 0 and 1 chars.
 *
 *Return:converted number,
 *or 0 if there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, res = 0, j = 0, int_value = 0;

	if (b == 0)
		return (0);
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	i--;
	for (; *(b + j) != '\0'; i--, j++)
	{
		int_value = *(b + j) - '0';
		if (int_value & 0x01)
			res += mul_by_two(i);
	}
	return (res);
}

/**
 *mul_by_two - multiplies two @i times.
 *@i: number of times to multiply.
 *
 *Return: multiple of two.
 */

unsigned int mul_by_two(unsigned int i)
{
	unsigned int x, res = 1;

	if (i == 0)
		return (1);
	for (x = 0; x < i; x++)
	{
		res *= 2;
	}
	return (res);
}

