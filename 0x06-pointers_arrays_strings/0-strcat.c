#include "holberton.h"
/**
 *_strcat - used for concatenation from one string to another
 *funtion appends n chacters from array pointed by src
 * to end of string pointed by  dest
 *Return: returns pointer to the resulting string dest
 *@dest: pointer to destination string
 *@src:pointer to source array
 */
char *_strcat(char *dest, char *src)
{
	/*beginning of string*/
	char *start = dest;
	/**
	 * First while loop mob=ves pointer dest to '\0',
	 * so that second while loop can begin appending
	 * characters from this position
	 */

	while (*dest != '\0')
	{
	 dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*src = '\0';
	return (start);
}
