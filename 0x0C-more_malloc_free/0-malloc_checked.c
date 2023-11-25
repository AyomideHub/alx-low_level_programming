#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocate memory using malloc
 * @b: size of memmory to be allocated
 * Return: ponter to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);
	return (pt);
}
