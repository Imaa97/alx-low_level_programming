#include "holberton.h"
/**
 *_strncat -  appends n characters from array pointed by src
 *to the end of string pointed by dest. Initial of src overwrites '\0'
 *@src: pointer to source array
 *@dest: pointer to the destination string
 *Return: strncat reurns value of dest
 *@n: maximum number of characters to be appended
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;/*copy of dest string*/
	/*pointer should not null pointer*/
	if ((dest == 0) && (src == 0))
	return (0);
	/*find end of dest string*/
	while (*dest != '\0')
	{
		dest++;
	}
	/**
	 *Append src string characters until you do not
	 *get null character of src or n != 0
	 */
	while (n--)
	{
		/**
		*All the code in the while function
		* can be expressed as to get same answer
		*if (!(*dest++ = *src))
		*/
		*dest = *src;

		if (*dest == '\0')
		{
			dest++;
			src++;
			return (start);
		}
		{
		dest++;
		src++;
		}
	}
	/*Append null charcater to the last digit of dest string*/
	*dest = '\0';
	return (start);
}
