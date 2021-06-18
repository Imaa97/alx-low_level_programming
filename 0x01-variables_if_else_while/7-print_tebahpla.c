#include<stdio.h>
/**
 * main - entry point into the program
 *
 * Return: A 0 (success)  any other number is failure
 * Description: the program should always return 0 any other number is failure
 */
int main(void)
{
	int i;

	for (i = 'Z'; i >= 'A'; i--)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}


