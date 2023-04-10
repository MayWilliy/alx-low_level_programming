#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - write a program that mulitiplies two numbers
 * @argc: count arguments of agrument passed
 * @argv: arrays to pointers that contains arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int num1, num2, Result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	Result = num1 * num2;

	printf("%d\n", Result);

	return (0);
}
