#include "holberton.h"
/**
 * _pow_recursion - calculates value of x raised to the power of y
 *@y: index or the exponent
 *@x: value or base for the index
 *Return:value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
