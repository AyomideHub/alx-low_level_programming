#include "main.h"

/**
 * more_numbers - print number 0 to i4, 10 times
 * Return: void
 */


void more_numbers(void)
{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');

		}
		_putchar('\n');

	}


}
