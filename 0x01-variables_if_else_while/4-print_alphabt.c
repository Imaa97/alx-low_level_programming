#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: 0 (Success)
*/
int main(void)
{
		char alph;

		for (alph = 'a'; alph <= 'z'; alph++)
		{
		if (alph != 'e' && alph != 'q')
		putchar(alph);
		}
		putchar('\n');

	return (0);
}
