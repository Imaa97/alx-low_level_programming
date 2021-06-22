#include "holberton.h"
/**
 * main -entry point into the program and it prints the worrd "Holberton"
 *
 * Return: 0 equates to success
 */
int main(void)
{
	int c;
	char phrase[] = "Holberton";

	for (c = 0; c < 9; c++)
	/* n++ yields original value of n, ++n yields value of n after adding.*/
	{
	_putchar(phrase[c]); /*prints the value of c*/
	}
	_putchar('\n'); /*prints out a new line*/

	return (0);
}
