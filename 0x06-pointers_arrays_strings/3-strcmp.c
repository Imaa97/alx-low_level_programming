#include "holberton.h"
/**
 *_strcmp - function used to compare two strings
 *@s1:pointer to destination array to be compared
 *@s2: pointer to source string which will be compared
 *Return: returns 0 if strings are same otherwise a non-zero value
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}


}
