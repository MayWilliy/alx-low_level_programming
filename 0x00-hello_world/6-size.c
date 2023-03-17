#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char m;
	int n;
	long int o;
	long long int x;
	float p;
	char output[145];

	snprintf(output, sizeof(output),
	"Size of a char: %zu byte(s)\n"
	"Size of an int: %zu byte(s)\n"
	"Size of a long int: %zu byte(s)\n"
	"Size of a long long int: %zu byte(s)\n"
	"Size of a float: %zu byte(s)\n",
	sizeof(m), sizeof(n), sizeof(o), sizeof(x), sizeof(p));
	return (0);
}
