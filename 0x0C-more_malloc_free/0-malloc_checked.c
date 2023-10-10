#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - function that allocate memory using malloc
 * @b: size of memmory to be allocated
 * Return: ponter to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *O;

	O = malloc(b);

	if (O == NULL)
		exit(98)
	else
		return (O);
}
