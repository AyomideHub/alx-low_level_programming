#include <stdlib.h>
#include "main.h"

/**
 * *_calloc -funtion for create an array
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
