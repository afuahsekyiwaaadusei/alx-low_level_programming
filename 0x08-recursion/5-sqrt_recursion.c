#include "main.h"

/**
 *_odd_num - returns odd numbers.
 *@o:pointer number
 *
 *Return: an odd number
 */

int _odd_num(int *o, int n)
{
	if (n == 0)
	{
		return (*o); 
	}

	if (n < 0)
	{
		return (-1);
	}
		

	if (*o % 2 != 0)
	{
		n = n - *o;
		*o = *o + 1;
	}
	else
	{
		*o = *o + 1;
	}

	return (_odd_num(o,n));
	
}


/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number
 *
 *Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int odd = 0;
	int *ptr = &odd;
	int result = _odd_num(ptr,n);
	return (result > 0 ? result / 2 : result);
}
