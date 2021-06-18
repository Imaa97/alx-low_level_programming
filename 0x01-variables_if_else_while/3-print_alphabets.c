#include <stdio.h>
/**
 * main -entry point into the program
 *
 *putchar(enter u to display uppercase)
 *Putchar(enter l to display lowercase)
 * Return: Alwaya a 0 success any other number is failure
 */

int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
