#include "main.h"
/**
 *get_len - returns the length of a string.
 *@str: string.
 *
 *Return: length of @str.
 */
int get_len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *mul_two - returns multiplies of two.
 *@exp: number of times to multiply two.
 *
 *Return: multiplies of two.
 */
int mul_two(int exp)
{
	int mul = 1, i = 0;

	if (exp == 0)
		return (1);
	while (i < exp)
	{
		mul *= 2;
		i++;
	}
	return (mul);
}

/**
 *binary_to_uint - a function that converts a binary number to an unsigned int.
 *@b: b is pointing to a string of 0 and 1 chars.
 *
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, exp;
	unsigned int result = 0;

	if (b == 0)
		return (0);
	len = get_len(b);
	if (len > 0)
		len--;
	while (*b != '\0')
	{
		if (*b == 48)
		{
			len--;
		}
		else if (*b == 49)
		{
			exp = mul_two(len);
			result += exp;
			len--;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
