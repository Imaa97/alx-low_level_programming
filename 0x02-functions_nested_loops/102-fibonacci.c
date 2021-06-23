#include <stdio.h>

/**
 * printFibonacciNumbers - funtion to print fibonacci numbers
 *@n: number of itemd to be printed
 *Description:  first n Fibonacci Numbers
 */
void printFibonacciNumbers()
{
	int a, b, c, i;

	/* Fibonacci magic initialization */
	a = 0;
	b = 1;
	c = 1;

	printf("Fibonacci terms: \n");

	/* Iterate through n terms */
	for(i = 1; i <= 50; i++)
	{
	printf("%d, ", c);

	a = b;/* Copy n-1 to n-2*/
	b = c;/* Copy current to n-1*/
	c = a + b; /* New term*/
	}
}	
/**
 * main - prints out the terms to be used
 * Return: 0 is alway a success*/		
	int main()
	{
	printFibonacciNumbers(50);	
	return 0;
	} 
