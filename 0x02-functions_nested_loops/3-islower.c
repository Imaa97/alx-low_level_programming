#include "holberton.h"
/**
 *_islower - function checks for lowercase charcters
 *
 * @c: a cahracter in ascii 
 *Return: 1 if c is lowercase and otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}

			

