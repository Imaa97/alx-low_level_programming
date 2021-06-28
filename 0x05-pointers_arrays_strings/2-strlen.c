#include "holberton.h"
/**
 *_strlen - function for  length of a string
 *@s: a character in ASCII chart
 *Return: returns length of string
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
