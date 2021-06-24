#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point in the C program
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return:If zero it is sucess any other value is failure
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
