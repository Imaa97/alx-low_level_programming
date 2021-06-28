#include "holberton.h"
/**
 *puts2 - function that prints every other second number.
 *@str: value to be evaluated
 *return: void
 */
void puts2(char *str)
{
	int len = 0;
	int n = 0;
	char *k = str;
	int i;

	while (*k != '\0')
	{
		k++;
		len++;
	}
	n = len - 1;

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
