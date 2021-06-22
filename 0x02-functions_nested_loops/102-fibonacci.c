#include <stdio.h>

/**
 * printFibonacciNumbers - funtion to print fibonacci numbers
 *@n: number of itemd to be printed
 *Description:  first n Fibonacci Numbers
 */
void printFibonacciNumbers(int n)
{
	int f1 = 1, f2 = 2, i;

	if
	(n < 1)
	return;

	printf("%d ", f1);

	for (i = 1; i < n; i++)
	{
	printf("%d ", f2);

	int next = f1 + f2;

	f1 = f2;
	f2 = next;
	}
}

/**
 * main -  Driver Code, inputs the number of fibonaccin printed
 *Return: 0 always sucess
 * Description: prints out the number of items to the stdout
 */
int main(void)
{
	printFibonacciNumbers(50);
	return (0);
}
