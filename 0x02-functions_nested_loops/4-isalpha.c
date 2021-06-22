#include "holberton.h"
/**
 * _isalpha - prints 1 after cchecking for alphabets and 0  for any other
 *@c:the charcter in ascii code
 * Return: prints either 1 or 0 if alphabet or any other respectively.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c >= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
