#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point into the function
 *@argc: argument counter
 *@argv: array of pointers to arrays
 *Return: 0 is always sucess any other number is failure
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
