#include <stdio.h>


/**
 * main - Program compilation starts from the  main
 * Description: this program print the name of the file it was compiled from
 *
 * Return: Alway 0 (Success)
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
