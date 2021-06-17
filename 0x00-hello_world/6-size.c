#include <stdio.h>
/**
 * main - entry into the program
 *
 * Return: should be 0 xero any other value is failure
 */
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long));
	printf("Size of a long long int: %lu bytes\n", sizeof(double));
	printf("Size of a float: %lu bytes\n", sizeof(float));

	return (0)
}
