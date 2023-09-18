#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: string to be counted
 * Return: 1 on success
 */

int _strlen(char *s)
{
	int i;
	int stcount = 0;

	for (i = 0; s[i] != '\0'; i++)
		stcount++;
	return (stcount);
}
