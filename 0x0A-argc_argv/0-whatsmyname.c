#include <stdio.h>
/**
 *main - writes name of programe
 *@argc:argurment count
 *@argv: pointer to array of strings
 *Return: zero always = sucess
 */
int main(int argc, char *argv[])/*command line argurments*/
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);/*printing the string to stdout*/
	}
	printf("\n");/*printing a new line*/
	return (0);
}
