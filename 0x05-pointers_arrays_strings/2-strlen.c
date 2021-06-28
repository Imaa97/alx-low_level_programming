#include "holberton.h"
/**
 *int _strlen - returns length of a string
 *@s: a character in ASCII chart
 *
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
