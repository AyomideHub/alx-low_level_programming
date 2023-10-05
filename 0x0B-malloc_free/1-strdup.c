#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
* _strdup - function that return a pointer to new memory space location
* @str: char
* Return: 0
*/


char *_strdup(char *str)
{
	char *z;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	z = malloc(sizeof(char) * (i + 1));

	if (z == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		z[r] = str[r];
	return (z);
}
