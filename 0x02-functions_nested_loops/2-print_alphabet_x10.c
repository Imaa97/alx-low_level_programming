#include "holberton.h"
/**
 *print_alphabet_x10 - entry point int the program
 *
 * Return:0 always success
 */
void print_alphabet_x10(void)
{
	char c, a;

	for (a = 0; a <= 9; a++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}

