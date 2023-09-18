#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, wc = 0;

	for (i = 0; str[i] != '\0'; i++)
		wc++;
	j = (wc - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
