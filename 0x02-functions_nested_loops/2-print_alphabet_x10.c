#include "main.h"

/**
 * main - function that print 10 time the alphabet
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int x;
	char i;


	for (x = 0; x < 10; x++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}

	



}
