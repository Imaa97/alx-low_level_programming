#include <stdio.h>
/**
 * main - entry point into the program
 *
 * Return: A 0 always equates to success
 * Description: the program prints all different combinations of three digits.
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
	for (j = i + 1; j <= 8; j++)
	{
	for (k = j + 1; k <= 9; k++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
	if (i < 7)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

