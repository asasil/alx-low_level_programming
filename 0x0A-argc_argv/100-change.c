#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculate the minimum number of coins to make change
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int amount, i, coin_count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coin_count = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			coin_count++;
			amount -= coins[i];
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
