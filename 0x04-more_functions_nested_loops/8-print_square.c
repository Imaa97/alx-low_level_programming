#include "holberton.h"
/**
 * print_square - prints a square
 * void: no return statements
 *@size: size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	/*To access rows of the square*/
	for (i = 1; i <= size; i++)
	{
	/*To access columns of the square*/
	for (j = 1; j <= size; j++)

	_putchar('#');

	_putchar('\n');
	}
}
