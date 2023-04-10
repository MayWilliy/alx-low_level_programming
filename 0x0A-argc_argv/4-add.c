#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -writ a program that addds positive numbers
 * @argc: count of argument passed
 * @argv: arrays to pointer of the string arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num  = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '\0')
		{
			printf("Error\n");
			return (1);
		}
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
