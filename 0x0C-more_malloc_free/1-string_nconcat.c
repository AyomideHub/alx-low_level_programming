#include <stdlib.h>
#include "main.h"

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
	int str1len, str2len;
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;

	for (i = 0; s2[i] != '\0'; i++)
		strlen2++;

	Ptr = malloc((sizeof(char) * (strlen1 + n) + 1);

	if (malloc == NULL)
		return (NULL);

	for (i = 0; Ptr[i] != '\0'; i++)
		Ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		Ptr[strlen1 + i] == s2[i];

	Ptr[strlen1 + i] == '\0';

	return (Ptr);
}
