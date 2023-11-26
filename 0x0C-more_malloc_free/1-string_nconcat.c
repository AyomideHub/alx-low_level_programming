#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/*
 *  *string_nconcat - function to concantenate two strings
 *  @s1: paramater
 *  @s2: parameter
 *  @n: parameter
 *  Return: pointer to the new memory created
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Ptr;
	unsigned int str1len = 0;
	unsigned int str2len = 0;
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str1len++;
	for (i = 0; s2[i] != '\0'; i++)
		str2len++;

	Ptr = malloc(sizeof(char) * (str1len + n) + 1);
	if (Ptr == NULL)
		return (NULL);
	for (i = 0; Ptr[i] != '\0'; i++)
		Ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		Ptr[str1len + i] = s2[i];
	Ptr[str1len + i] = '\0';

	return (Ptr);
}
