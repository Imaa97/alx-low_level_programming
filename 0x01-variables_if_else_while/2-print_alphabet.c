#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		for (n = 'a'; n <= 'z'; ++n)
		putchar(n);
		putchar('\n');
	return (0);
}