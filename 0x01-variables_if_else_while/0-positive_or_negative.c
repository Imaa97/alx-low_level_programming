#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 * main - entry point into the program
 *
 * Return: A 0 (success)  any other number is failure
 * Description: the program should always return 0 any other number is failure
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
