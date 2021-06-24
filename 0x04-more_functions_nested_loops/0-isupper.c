#include "holberton.h"
/**
 * _isupper - function that checks for upeercase letters only
 * @c: a character in ASCIII
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
