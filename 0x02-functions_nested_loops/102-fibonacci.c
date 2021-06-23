#include <stdio.h>

/**
 * printFibonacciNumbers - funtion to print fibonacci numbers
 *@n: number of itemd to be printed
 *Description:  first n Fibonacci Numbers
 */
void printFibonacciNumbers(void)
{
	long int a, b, c, i;

	/* Fibonacci initialization */
	a = 0;
	b = 1;
	c = 1;

	printf("Fibonacci terms: \n");

	/* Iterate through n terms */
	for (i = 1; i <= 50; i++)
	{
	printf("%ld, ", c);

	c = a + b;/* New Term*/
	a = b;/* Copy n-1 to n2*/
	b = c; /* Copy current to n-1*/
	}
}
/**
 * main - prints out the terms to be used
 * Return: 0 is alway a success
 */
	int main(void)
	{
	printFibonacciNumbers(50);
	return (0);
	}
