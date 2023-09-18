#include "main.h"

/**
 * print_rev - function that prints a string in reverse, followed by a new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int j;
	int wc = 0;

	for (j = 0; s[j] != '\0'; j++)
		wc++;
	for (j = wc - 1; j <= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
