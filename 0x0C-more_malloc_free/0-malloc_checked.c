#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: size to allocated
 *Return: Pointer to alloocate memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *i;/* Declaration of a void pointer*/

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
