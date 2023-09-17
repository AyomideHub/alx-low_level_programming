#include "main.h"

/**
 * print_alphabet - function that print the alphatbet in lower case, followed by new line
 * Return: 0 alwways
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
