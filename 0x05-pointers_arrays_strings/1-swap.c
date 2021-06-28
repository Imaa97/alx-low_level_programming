#include "holberton.h"
/**
 *swap_int - funtion that the values of two integers
 *@a: a character in the ASCII chart
 *@b: a character in the ASCII chart
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;

	*a = *b;
	*b = j;
}
