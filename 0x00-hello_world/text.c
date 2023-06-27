#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	signed char x;
	x = 0;
	while (x >= -127)
	{
		printf("%c\n", x);
		x = x - 1;
	}

	return (0);
}
