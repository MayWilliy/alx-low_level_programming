#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the minimum number of coins to make change for an amount of money
 *
 * @argc: count the argument passed
 * @argv: array of string to the pointer to the argument
 *
 */

int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cent >= 25)
	{
		coint++;
		cent -= 25;
	}
	while (cent >= 10)
	{
		coin++;
		cent -= 10;
	}
	while (cent >= 5)
	{
		coin++;
		cent -= 5;
	}
	while (cent >= 2)
	{
		coin++;
		cent -= 2;
	}
	while (cent >= 1)
	{
		coin++;
		cent -= 1;
	}

	printf("%d\n", coins);
	return (0);
}

