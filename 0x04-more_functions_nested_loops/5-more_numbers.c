#include "holberton.h"
/**
 *more_numbers - prints out more numbers.
 *
 */
void more_numbers(void)
{
	char c;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 14; c++)
	{
		if (c > 9)
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
	}
		_putchar('\n');
	}
}
