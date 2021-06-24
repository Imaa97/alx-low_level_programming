#include "holberton.h"
/**
 * main - entry point into the program
 *
 * Return: Always 0 equals success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return;
}
