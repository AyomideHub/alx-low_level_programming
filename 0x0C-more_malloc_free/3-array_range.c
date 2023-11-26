#include "main.h"
#include <stdlib.h>

/**
 * *array_range - fuction to create an arry of integers
 * @min: parameter
 * @max: parameter
 * Return: pointer to the array created
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
