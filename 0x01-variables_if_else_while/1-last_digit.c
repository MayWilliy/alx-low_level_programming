#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	remainder = n % 10;
	if (remainder > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, remainder);
	}
	else if (remainder == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, remainder);
	}
	else if (remainder < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, remainder);
	}

	return (0);
}
