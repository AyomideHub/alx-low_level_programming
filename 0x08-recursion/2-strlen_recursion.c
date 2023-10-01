#include "main.h"

/**
 * _strlen_recursion - funtion to print the lenght of a string
 * @s: input
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int slt = 0;

	if (*s)
	{
		slt++;
		slt +- _strlen_recursion(s + 1);
	}
	return (slt)
}
