#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point.
 *@argc: count of arguements passed to main from command line.
 *@argv: an array of strings.
 *Each sring points to one of the arguements passed.
 *
 *a program that prints the minimum number of coins to make
 *change for an amount of money.
 *Return: zero on succes
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int sum = 0;
	int amount;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);

	}
	amount = atoi(argv[1]);

	while (i < 5 && amount >= 0)
	{
		while (coins[i] <= amount)
		{
			sum++;
			amount -= coins[i];
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
