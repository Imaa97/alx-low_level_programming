#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function in program
 *@argc: argurment counter
 *@argv: pointer to string
 *Return: 0 is sucess any other value is failure
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/*atoi to convert a string to an int*/
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}
